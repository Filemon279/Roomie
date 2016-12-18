package pl.mofinet.myapplication.Start;


import android.Manifest;
import android.app.Notification;
import android.app.NotificationManager;

import android.content.Context;
import android.app.Activity;
import android.content.pm.PackageManager;
import android.location.Location;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.app.ActivityCompat;
import android.util.Log;
import android.widget.TextView;
import android.widget.Toast;
import android.content.Intent;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Color;
import android.graphics.Point;

import android.os.Build;
import android.view.Display;
import android.view.LayoutInflater;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.ImageButton;
import android.widget.ImageView;
import android.widget.RemoteViews;


import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.api.GoogleApiClient;
import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.api.GoogleApiClient;
import com.google.android.gms.common.api.GoogleApiClient.ConnectionCallbacks;
import com.google.android.gms.common.api.GoogleApiClient.OnConnectionFailedListener;
import com.google.android.gms.location.LocationServices;

import pl.mofinet.myapplication.Funkcje.MyFunc;
import pl.mofinet.myapplication.MainMenu.Hotel_map;
import pl.mofinet.myapplication.MainMenu.Hotel_services;
import pl.mofinet.myapplication.MainMenu.Hotel_sos;
import pl.mofinet.myapplication.MainMenu.Hotel_transport;
import pl.mofinet.myapplication.R;

/**
 *
 *
 */
public class MainActivity extends Activity implements
        GoogleApiClient.ConnectionCallbacks, GoogleApiClient.OnConnectionFailedListener {

    private ImageButton service, transport, sos, map, settings;
    private static NotificationManager notificationManager;
    private static Context MainActivityOut;
    private String packName;
    public TextView checkIn;
    public TextView checkOut;
    private static LayoutInflater layoutInflater;
    private Display display;
    static Point size = new Point();
    public float Longitude,Latitude;

    GoogleApiClient mGoogleApiClient;
    public static Location mLastLocation;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        Runtime.getRuntime().gc();
        super.onCreate(savedInstanceState);
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
        WindowManager.LayoutParams.FLAG_FULLSCREEN);
        setContentView(R.layout.activity_main);

//////////////////////////

        buildGoogleApiClient();
        if (mGoogleApiClient != null) {
            mGoogleApiClient.connect();
        } else
            Toast.makeText(getApplicationContext(), "Not connected...", Toast.LENGTH_SHORT).show();
////////////////////////


        ImageView background = (ImageView) findViewById(R.id.main_background);
        background.setImageBitmap(MyFunc.decodeImage(getResources(), R.drawable.hotel_bg, getWindowManager().getDefaultDisplay().getWidth(), getWindowManager().getDefaultDisplay().getHeight()));
        ImageView logo_issp = (ImageView) findViewById(R.id.main_logo);
        logo_issp.setImageBitmap(MyFunc.decodeImage(getResources(), R.drawable.black_issp2, 200, 200));


        MainActivityOut = getApplicationContext();
        notificationManager = (NotificationManager) getSystemService(NOTIFICATION_SERVICE);
        packName = getPackageName();
        layoutInflater = (LayoutInflater) getApplicationContext().getSystemService(LAYOUT_INFLATER_SERVICE);
        display = getWindow().getWindowManager().getDefaultDisplay();
        display.getSize(size);
        checkIn = (TextView) findViewById(R.id.check_in_field);
        checkOut = (TextView) findViewById(R.id.check_out_field);

        service = (ImageButton) findViewById(R.id.button_service);
       // service.setImageBitmap(decodeImage(getResources(), R.drawable.phone_flat, getWindowManager().getDefaultDisplay().getWidth(), getWindowManager().getDefaultDisplay().getHeight()));
        service.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent window_service = new Intent(getApplicationContext(), Hotel_services.class);
                window_service.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
               startActivity(window_service);
                finish();

            }

        });

        transport = (ImageButton) findViewById(R.id.button_transport);

        transport.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent window_transport = new Intent(getApplicationContext(), Hotel_transport.class);
               startActivity(window_transport);

            }

        });


        sos = (ImageButton) findViewById(R.id.button_sos);

        sos.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {

                Intent window_sos = new Intent(getApplicationContext(), Hotel_sos.class);
                startActivity(window_sos);
                //  img_animation.clearAnimation();
            }

        });

        map = (ImageButton) findViewById(R.id.button_map);

        map.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {

                Intent window_sos = new Intent(getApplicationContext(), Hotel_map.class);
              startActivity(window_sos);
                //  img_animation.clearAnimation();

            }

        });

        settings = (ImageButton) findViewById(R.id.button_setting);

        settings.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {


                Intent window_sos = new Intent(getApplicationContext(), pl.mofinet.myapplication.MainMenu.settings.class);
               startActivity(window_sos);
                //  img_animation.clearAnimation();

            }

        });

    }

    protected synchronized void buildGoogleApiClient() {
        mGoogleApiClient = new GoogleApiClient.Builder(getApplicationContext())
                .addConnectionCallbacks(this)
                .addOnConnectionFailedListener(this)
                .addApi(LocationServices.API)
                .build();
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


    @Override
    public void onConnected(@Nullable Bundle bundle) {
        if (ActivityCompat.checkSelfPermission(getApplicationContext(), Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED && ActivityCompat.checkSelfPermission(this, Manifest.permission.ACCESS_COARSE_LOCATION) != PackageManager.PERMISSION_GRANTED) {
            // TODO: Consider calling
            //    ActivityCompat#requestPermissions
            // here to request the missing permissions, and then overriding
            //   public void onRequestPermissionsResult(int requestCode, String[] permissions,
            //                                          int[] grantResults)
            // to handle the case where the user grants the permission. See the documentation
            // for ActivityCompat#requestPermissions for more details.
            return;
        }

        mLastLocation = LocationServices.FusedLocationApi.getLastLocation(
                mGoogleApiClient);

        if (mLastLocation != null) {
            Latitude = ( float)mLastLocation.getLatitude();
            Longitude = (float)mLastLocation.getLongitude();
            Log.i(String.valueOf(Latitude),String.valueOf(Longitude));
            Log.i("UWAGA!!!!!!!!!!!!!!!","Latitude: "+ String.valueOf(mLastLocation.getLatitude())+"Longitude: "+
                    String.valueOf(mLastLocation.getLongitude()));
        }
    }

    @Override
    public void onConnectionSuspended(int i) {
        Toast.makeText(getApplicationContext(), "Połączenie GPS zawieszone", Toast.LENGTH_SHORT).show();

    }

    @Override
    public void onConnectionFailed(@NonNull ConnectionResult connectionResult) {
        Toast.makeText(getApplicationContext(), "GPS stracił połączenie", Toast.LENGTH_SHORT).show();
    }

    public Location getLocation()
    {
        return mLastLocation;
    }
}

