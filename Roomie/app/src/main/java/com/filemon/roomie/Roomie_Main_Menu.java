package com.filemon.roomie;

import android.app.Notification;
import android.app.NotificationManager;
import android.content.Context;
import android.content.Intent;
import android.graphics.Color;
import android.os.Build;
import android.support.v4.app.NotificationCompat;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.ImageButton;
import android.widget.RemoteViews;
import android.widget.TextView;


public class Roomie_Main_Menu extends AppCompatActivity {

    Thread update;
    private Context MainActivityOut;
    private NotificationManager notificationManager;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        MainActivityOut = getApplicationContext();
        notificationManager = (NotificationManager) getSystemService(NOTIFICATION_SERVICE);
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
        WindowManager.LayoutParams.FLAG_FULLSCREEN);
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_roomie__main__menu);
        WebSocket_Client.client_socket.send("USER_CONNECTED");



        ImageButton service = (ImageButton) findViewById(R.id.button_service);
        service.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent window_service = new Intent(getBaseContext(), Roomie_Main_Services.class);
                startActivity(window_service);
                System.gc();
            }
        });

        ImageButton transport = (ImageButton) findViewById(R.id.button_transport);
        transport.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
               Intent window_transport = new Intent(getBaseContext(), Roomie_Main_Transport.class);
               startActivity(window_transport);
                System.gc();
            }
        });

        ImageButton sos = (ImageButton) findViewById(R.id.button_sos);
        sos.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent window_sos = new Intent(getBaseContext(), Roomie_Main_Sos.class);
                startActivity(window_sos);
                System.gc();
            }

        });

        ImageButton map = (ImageButton) findViewById(R.id.button_map);
        map.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent window_sos = new Intent(getBaseContext(), Roomie_Main_Map.class);
                startActivity(window_sos);
                System.gc();
            }
        });

        ImageButton settings = (ImageButton) findViewById(R.id.button_setting);
        settings.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent window_sos = new Intent(getBaseContext(), Roomie_Main_Setting.class);
                startActivity(window_sos);
                System.gc();
            }
        });

        final TextView checkIn = (TextView)findViewById(R.id.check_in_field);
        final TextView checkOut = (TextView)findViewById(R.id.check_out_field);
        update = new Thread() {
            public void run() {
                boolean daneIn=false;
                while (true) {

                    if (WebSocket_Client.logged) {

                            if(WebSocket_Client.dane&&!daneIn)
                            {
                                runOnUiThread(new Runnable() {
                                    @Override
                                    public void run() {
                                        checkIn.setText("CHECK IN: "+WebSocket_Client.checkIn);
                                        checkOut.setText("CHECK OUT: "+WebSocket_Client.checkOut);
                                     }
                                     });
                                      daneIn=true;
                            }
                        if(WebSocket_Client.Notification)
                        {
                            WebSocket_Client.Notification=false;
                            createNotification(WebSocket_Client.NotificationText);
                        }
                    }
                    try {
                        Thread.sleep(3000);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
            }
        };
        update.start();



    }

    private void createNotification(String msgPosition) {
        String[] msgPositions = msgPosition.split("#");
        Notification foregroundNote = null;
        RemoteViews bigView = new RemoteViews(MainActivityOut.getPackageName(),
                R.layout.widget);
        Notification.Builder mNotifyBuilder = new Notification.Builder(MainActivityOut);
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN) {
            foregroundNote = mNotifyBuilder.setContentTitle(msgPositions[0])
                    .setContentText("Przeciagnij w dol by przeczytać")
                    .setSmallIcon(R.mipmap.ic_launcher)
                    .setLights(Color.BLUE, 3000, 3000)
                    .setVibrate(new long[]{700, 700, 700, 700, 700})
                    .build();
        }
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN) {
            foregroundNote.bigContentView = bigView;
        }
        bigView.setTextViewText(R.id.viewPowiadomienie, msgPositions[1]);
        notificationManager.notify(1, foregroundNote);
    }
}
