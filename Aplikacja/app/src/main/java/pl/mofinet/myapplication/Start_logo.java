package pl.mofinet.myapplication;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.ImageView;
import android.view.animation.*;
import android.view.animation.AnimationUtils;
import android.widget.LinearLayout;

import java.io.ByteArrayOutputStream;

public class Start_logo extends AppCompatActivity {
    ImageView background;
    static Context Startlogo;
    static Activity startlogoactiv;
    public Client client = new Client();
    private static AlertDialog.Builder builder;
    final BitmapFactory.Options options = new BitmapFactory.Options();
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_start_logo);
        Startlogo=this;
        startlogoactiv=this;
        builder = new AlertDialog.Builder(this);

        ImageView logo = (ImageView) findViewById(R.id.start_logo_logo);
        ImageView issp_logo = (ImageView) findViewById(R.id.issp_logo);
        background = (ImageView) findViewById(R.id.start_logo_bg);
        background.setImageBitmap(
                decodeSampledBitmapFromResource(getResources(), R.mipmap.service_bg, getWindowManager().getDefaultDisplay().getWidth(),
                        getWindowManager().getDefaultDisplay().getHeight()));


        logo.setImageBitmap(
                decodeSampledBitmapFromResource(getResources(), R.drawable.roomie_logo_shadow, 400,400));
        logo.clearAnimation();

        issp_logo.setImageBitmap(
                decodeSampledBitmapFromResource(getResources(), R.drawable.white_issp, 400,400));
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

                    Intent oknoGlowne = new Intent(Start_logo.this, LoginActivity.class);
                    Start_logo.this.startActivity(oknoGlowne);
                    finish();


                }
            }
        });



    }

    public static void popupInfo(String text)
    {

        builder
                .setTitle("Problem Logowania")
                .setMessage(text)
                .setIcon(android.R.drawable.ic_dialog_alert)
                .setPositiveButton("OK", new DialogInterface.OnClickListener() {
                    public void onClick(DialogInterface dialog, int which) {
                        //  System.exit(0); <-- Prawidłowe
                        showMainActiv(); // <--Testy
                    }
                })
                .show();

        // popupInfoText.setText(text);
        // popupWindow.showAtLocation(relativeLayout, Gravity.NO_GRAVITY, (int) (size.x / 2 - ((size.x * .9) / 2)), (int) (size.y / 2 - ((size.y * .2) / 2)));

    }

    public static void showMainActiv(){


        Intent oknoGlowne = new Intent(Startlogo, MainActivity.class);

        Startlogo.startActivity(oknoGlowne);
//startlogoactiv.finish();
    }
    public static void showLoginActiv(){
        Intent oknoGlowne = new Intent(Startlogo, LoginActivity.class);

        Startlogo.startActivity(oknoGlowne);
        //startlogoactiv.finish();
    }

    public static int calculateInSampleSize(
            BitmapFactory.Options options, int reqWidth, int reqHeight) {
        // Raw height and width of image
        final int height = options.outHeight;
        final int width = options.outWidth;
        int inSampleSize = 1;

        if (height > reqHeight || width > reqWidth) {

            final int halfHeight = height / 2;
            final int halfWidth = width / 2;

            // Calculate the largest inSampleSize value that is a power of 2 and keeps both
            // height and width larger than the requested height and width.
            while ((halfHeight / inSampleSize) > reqHeight
                    && (halfWidth / inSampleSize) > reqWidth) {
                inSampleSize *= 2;
            }
        }

        return inSampleSize;
    }

    public static Bitmap decodeSampledBitmapFromResource(Resources res, int resId,
                                                         int reqWidth, int reqHeight) {

        // First decode with inJustDecodeBounds=true to check dimensions
        final BitmapFactory.Options options = new BitmapFactory.Options();
        options.inJustDecodeBounds = true;
        BitmapFactory.decodeResource(res, resId, options);

        // Calculate inSampleSize
        options.inSampleSize = calculateInSampleSize(options, reqWidth, reqHeight);

        // Decode bitmap with inSampleSize set
        options.inJustDecodeBounds = false;
        return BitmapFactory.decodeResource(res, resId, options);
    }

}