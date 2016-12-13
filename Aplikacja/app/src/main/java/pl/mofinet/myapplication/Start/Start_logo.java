package pl.mofinet.myapplication.Start;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.ImageView;
import android.view.animation.*;
import android.view.animation.AnimationUtils;

import pl.mofinet.myapplication.Funkcje.Client;
import pl.mofinet.myapplication.Funkcje.MyFunc;
import pl.mofinet.myapplication.R;

public class Start_logo extends AppCompatActivity {
    private ImageView background;
    private static Context Startlogo;
    private Activity startlogoactiv;
    public Client client = new Client(Startlogo);
    private AlertDialog.Builder builder;
    final BitmapFactory.Options options = new BitmapFactory.Options();
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_start_logo);
        Startlogo=this;
        builder = new AlertDialog.Builder(Startlogo);

        ImageView logo = (ImageView) findViewById(R.id.start_logo_logo);
        ImageView issp_logo = (ImageView) findViewById(R.id.issp_logo);
        background = (ImageView) findViewById(R.id.start_logo_bg);
        background.setImageBitmap(decodeImage(getResources(), R.drawable.service_bg, getWindowManager().getDefaultDisplay().getWidth(),
                        getWindowManager().getDefaultDisplay().getHeight()));


        logo.setImageBitmap(
                decodeImage(getResources(), R.drawable.roomie_logo_shadow, 400,400));
        logo.clearAnimation();

        issp_logo.setImageBitmap(
               decodeImage(getResources(), R.drawable.white_issp, 400,400));
        issp_logo.clearAnimation();

        Animation show = AnimationUtils.loadAnimation(getApplicationContext(), R.anim.show);
        show.setStartOffset(200);//1600
        logo.startAnimation(show);
        issp_logo.startAnimation(show);

        show.setAnimationListener(new Animation.AnimationListener() {
            @Override
            public void onAnimationStart(Animation arg0) {
            }

            @Override
            public void onAnimationRepeat(Animation arg0) {
            }

            @Override
            public void onAnimationEnd(Animation arg0) {

                if (client.client == null) {
                    popupInfo("Brak połączenia z Serwerem Hotelu. Skontaktuj się z obsługą");

                }

                else{

                    // showLoginActiv();//tylko na testy

                    Intent oknoGlowne = new Intent(Startlogo, LoginActivity.class);
                    Startlogo.startActivity(oknoGlowne);



                }
               // Runtime.getRuntime().gc();
               // finish();
            }
        });



    }

    public void popupInfo(String text)
    {

        builder
                .setTitle("Problem Logowania")
                .setMessage(text)
                .setIcon(R.drawable.warning_icon)
                .setPositiveButton("OK", new DialogInterface.OnClickListener() {
                    public void onClick(DialogInterface dialog, int which) {
                        //  System.exit(0); <-- Prawidłowe
                        showMainActiv(); // <--Testy
                        Runtime.getRuntime().gc();
                        finish();
                    }
                })
                .show();

        // popupInfoText.setText(text);
        // popupWindow.showAtLocation(relativeLayout, Gravity.NO_GRAVITY, (int) (size.x / 2 - ((size.x * .9) / 2)), (int) (size.y / 2 - ((size.y * .2) / 2)));

    }

    public static void showMainActiv(){


        Intent oknoGlowne = new Intent(Startlogo, MainActivity.class);
        Startlogo.startActivity(oknoGlowne);
        System.gc();

    }
    public void showLoginActiv(){
        Intent oknoGlowne = new Intent(Startlogo, LoginActivity.class);
        oknoGlowne.setFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
        Startlogo.startActivity(oknoGlowne);

        //startlogoactiv.finish();
    }

    public int calculateInSampleSize(BitmapFactory.Options options, int reqWidth, int reqHeight) {
        // Raw height and width of image
        final int height = options.outHeight;
        final int width = options.outWidth;
        int inSampleSize = 1;

        if (height > reqHeight || width > reqWidth) {

            final int halfHeight = height / 2;
            final int halfWidth = width / 2;

            // Calculate the largest inSampleSize value that is a power of 2 and keeps both
            // height and width larger than the requested height and width.
            while ((halfHeight / inSampleSize) >= reqHeight
                    && (halfWidth / inSampleSize) >= reqWidth) {
                inSampleSize *= 2;
            }
        }
        Log.i("SAMPLE SIZE!!!!!!:",String.valueOf(inSampleSize));

        return inSampleSize;
    }

    public Bitmap decodeImage(Resources res, int resId, int reqWidth, int reqHeight) {

        // First decode with inJustDecodeBounds=true to check dimensions
        final BitmapFactory.Options options = new BitmapFactory.Options();
        options.inJustDecodeBounds = true;
        BitmapFactory.decodeResource(res, resId, options);

        // Calculate inSampleSize
        options.inSampleSize = calculateInSampleSize(options, reqWidth, reqHeight);

        // Decode bitmap with inSampleSize set
        options.inJustDecodeBounds = false;
        options.inDither = true;

        return BitmapFactory.decodeResource(res, resId, options);
    }

}