package com.filemon.roomie;

import android.app.AlarmManager;
import android.app.PendingIntent;
import android.content.Intent;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;

public class Roomie_Main_Setting extends AppCompatActivity {

    private final String PREFS_NAME = "LoginAndPass";
    private String PREFS_USERNAME= "prefsUsername";
    private String PREFS_PASSWORD="prefsPassword";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                WindowManager.LayoutParams.FLAG_FULLSCREEN);
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_settings);

       Button logout = (Button) findViewById(R.id.button_logout);
        logout.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {


                getSharedPreferences(PREFS_NAME, MODE_PRIVATE)
                        .edit()
                        .putString(PREFS_PASSWORD, "")
                        .putString(PREFS_USERNAME, "")
                        .commit();

                Intent mStartActivity = new Intent(getBaseContext(), Roomie_Main.class);
                int mPendingIntentId = 123279;
                PendingIntent mPendingIntent = PendingIntent.getActivity(getBaseContext(), mPendingIntentId,    mStartActivity, PendingIntent.FLAG_CANCEL_CURRENT);
                AlarmManager mgr = (AlarmManager)getBaseContext().getSystemService(getBaseContext().ALARM_SERVICE);
                mgr.set(AlarmManager.RTC, System.currentTimeMillis() + 100, mPendingIntent);
                System.exit(0);
            }

        });
    }
}
