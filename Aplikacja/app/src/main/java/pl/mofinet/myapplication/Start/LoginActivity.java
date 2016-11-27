package pl.mofinet.myapplication.Start;

import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.SharedPreferences;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Point;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Display;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.PopupWindow;
import android.widget.RelativeLayout;

import pl.mofinet.myapplication.Funkcje.Client;
import pl.mofinet.myapplication.R;

public class LoginActivity extends AppCompatActivity {

    private static PopupWindow popupWindow;
    private static LayoutInflater layoutInflater;
    private static RelativeLayout relativeLayout;
    public static Button buttonZaloguj1;
    private static EditText nrPokoju,hasloPokoju;
    private static AlertDialog.Builder builder;
    public static Context LoginActivityOut;
    static Point size = new Point();
    private Display display;


    public static final String PREFS_NAME = "LoginAndPass";
    public String PREFS_USERNAME= "prefsUsername";
    public String PREFS_PASSWORD="prefsPassword";

    // Client client = Start_logo.client;

    @Override
    protected void onCreate(Bundle savedInstanceState) {

        super.onCreate(savedInstanceState);

        setContentView(R.layout.activity_login);

        ImageView logo = (ImageView) findViewById(R.id.login_logo);
        ImageView background = (ImageView) findViewById(R.id.background_login);
        background.setImageBitmap(decodeImage(getResources(),R.mipmap.login_bg,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));
        logo.setImageBitmap(
        decodeImage(getResources(), R.drawable.roomie_logo_shadow, 400, 400));


        buttonZaloguj1 = (Button) findViewById(R.id.buttonZaloguj);
        nrPokoju = (EditText) findViewById(R.id.nrPokoju);
        hasloPokoju = (EditText) findViewById(R.id.hasloPokoju);
        layoutInflater = (LayoutInflater) getApplicationContext().getSystemService(LAYOUT_INFLATER_SERVICE);
        builder = new AlertDialog.Builder(this);
        display = getWindow().getWindowManager().getDefaultDisplay();
        display.getSize(size);

        SharedPreferences pref = getSharedPreferences(PREFS_NAME, MODE_PRIVATE);
        String username = pref.getString(PREFS_USERNAME, "");
        String pass = pref.getString(PREFS_PASSWORD, "");

        if (!username.equals("") && !pass.equals("")) {
            Client.sendRequest("LOGREQ#"+username+"#"+pass);
        }

        buttonZaloguj1.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {

                String pass = hasloPokoju.getText().toString();
                String usr = nrPokoju.getText().toString();
             //   Client.sendRequest("CLEAN#12:30#12.04.2016#Prosze o umycie telewizora");
                if (usr.equals("")) popupInfo("Proszę podać numer pokoju");
                else if (pass.equals("")) popupInfo("Proszę podać hasło");
                else{
                    Client.sendRequest("LOGREQ#" + usr + "#" + pass);

                    getSharedPreferences(PREFS_NAME, MODE_PRIVATE)
                            .edit()
                            .putString(PREFS_PASSWORD, pass)
                            .putString(PREFS_USERNAME, usr)
                            .commit();


            //        Intent oknoGlowne = new Intent(LoginActivity.this, MainActivity.class);
                 //   LoginActivity.this.startActivity(oknoGlowne);

                //    finish();
                }

            }

        });

    }




    public static void popupInfo(String text)
    {

        builder
                .setTitle("Problem Logowania")
                .setMessage(text)
                .setIcon(R.drawable.warning_icon)
                .setPositiveButton("OK", new DialogInterface.OnClickListener() {
                    public void onClick(DialogInterface dialog, int which) {

                    }
                })
                .show();

    }

public static EditText getNrPokoju(){
    return nrPokoju;
}


    @Override
    public void onBackPressed() {
        builder
                .setTitle("Zakończ Roomie")
                .setMessage("Czy na pewno chcesz zakończyć działanie roomie?")
                .setIcon(android.R.drawable.ic_dialog_alert)
                .setPositiveButton("Tak", new DialogInterface.OnClickListener() {
                    public void onClick(DialogInterface dialog, int which) {
                        android.os.Process.killProcess(android.os.Process.myPid());
                    }
                })
                .setNegativeButton("Nie", new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialog, int which) {

                    }
                })
                .show();
    }




    //Image
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

    public static Bitmap decodeImage(Resources res, int resId,
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
