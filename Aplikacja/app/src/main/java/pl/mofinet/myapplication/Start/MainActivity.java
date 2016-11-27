package pl.mofinet.myapplication.Start;


import android.app.Notification;
import android.app.NotificationManager;

import android.content.Context;

import android.content.Intent;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Color;
import android.graphics.Point;

import android.os.Build;
import android.os.Bundle;
import android.app.Activity;
import android.view.Display;
import android.view.LayoutInflater;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.ImageButton;
import android.widget.ImageView;
import android.widget.RemoteViews;
import android.widget.TextView;

import pl.mofinet.myapplication.MainMenu.Hotel_map;
import pl.mofinet.myapplication.MainMenu.Hotel_services;
import pl.mofinet.myapplication.MainMenu.Hotel_sos;
import pl.mofinet.myapplication.MainMenu.Hotel_transport;
import pl.mofinet.myapplication.R;

/**
 *
 *
 *
 *
 */
public class MainActivity extends Activity {

    private static ImageButton service,transport,sos,map,settings;
    private static NotificationManager notificationManager;
    private static Context MainActivityOut;
    private static String packName;
    public static TextView checkIn;
    public static TextView checkOut;
    private static LayoutInflater layoutInflater;
    private Display display;
    static Point size = new Point();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);



        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                WindowManager.LayoutParams.FLAG_FULLSCREEN);


        setContentView(R.layout.activity_main);

        ImageView background = (ImageView) findViewById(R.id.main_background);
        background.setImageBitmap(decodeImage(getResources(),R.mipmap.hotel_bg,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));
        ImageView logo_issp = (ImageView) findViewById(R.id.main_logo);
        logo_issp.setImageBitmap(decodeImage(getResources(),R.drawable.black_issp2,200,200));



        MainActivityOut=this;
      notificationManager =(NotificationManager) getSystemService(NOTIFICATION_SERVICE);
        packName= getPackageName();
        layoutInflater = (LayoutInflater) getApplicationContext().getSystemService(LAYOUT_INFLATER_SERVICE);
        display = getWindow().getWindowManager().getDefaultDisplay();
        display.getSize(size);
        checkIn = (TextView) findViewById(R.id.check_in_field);
        checkOut = (TextView) findViewById(R.id.check_out_field);

        service = (ImageButton) findViewById(R.id.button_service);

        service.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent window_service = new Intent(MainActivity.this, Hotel_services.class);
                MainActivity.this.startActivity(window_service);

            }

        });

        transport = (ImageButton) findViewById(R.id.button_transport);

        transport.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
            //    Client.sendRequest("CLEAN#12:30#12.04.2016#Prosze o umycie telewizora");
                Intent window_transport = new Intent(MainActivity.this, Hotel_transport.class);
                MainActivity.this.startActivity(window_transport);
                //  img_animation.clearAnimation();
            }

        });


        sos = (ImageButton) findViewById(R.id.button_sos);

        sos.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {

                Intent window_sos = new Intent(MainActivity.this, Hotel_sos.class);
                MainActivity.this.startActivity(window_sos);
                //  img_animation.clearAnimation();
            }

        });

        map = (ImageButton) findViewById(R.id.button_map);

        map.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {

                Intent window_sos = new Intent(MainActivity.this, Hotel_map.class);
                MainActivity.this.startActivity(window_sos);
                //  img_animation.clearAnimation();

            }

        });

        settings = (ImageButton) findViewById(R.id.button_setting);

        settings.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {


                Intent window_sos = new Intent(MainActivity.this, pl.mofinet.myapplication.MainMenu.settings.class);
                MainActivity.this.startActivity(window_sos);
                //  img_animation.clearAnimation();

            }

        });

/*




        menu.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent oknoGlowne = new Intent(MainActivity.this, Menu_page.class);
                MainActivity.this.startActivity(oknoGlowne);
              //  img_animation.clearAnimation();
            }

        });*/






//LoginActivity.client.inicjuj();

    }





    public static void createNotification(String[] msgPositions) {

        Notification foregroundNote = null;
        RemoteViews bigView = new RemoteViews(MainActivityOut.getPackageName(),
                R.layout.widget);

        Notification.Builder mNotifyBuilder = new Notification.Builder(MainActivityOut);
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN) {
            foregroundNote = mNotifyBuilder.setContentTitle(msgPositions[1])
                    .setContentText("Przeciagnij w dol by przeczytać")
                    .setSmallIcon(R.drawable.ic_mood_black_24dp)
                     .setLights(Color.BLUE, 3000, 3000)
                 .setVibrate(new long[]{700, 700, 700, 700, 700})
                    .build();




        }

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN) {
            foregroundNote.bigContentView = bigView;
        }
        bigView.setTextViewText(R.id.viewPowiadomienie, msgPositions[2]);
        notificationManager.notify(1, foregroundNote);

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

