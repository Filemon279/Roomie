package com.filemon.roomie;

import android.content.Intent;
import android.graphics.drawable.BitmapDrawable;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Window;
import android.view.WindowManager;
import android.view.animation.Animation;
import android.view.animation.AnimationUtils;
import android.widget.ImageView;

import java.net.URISyntaxException;

public class Roomie_Main extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
        WindowManager.LayoutParams.FLAG_FULLSCREEN);
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_roomie__main);
        WebSocket_Client.setActiv(this);

        ImageView logo = (ImageView) findViewById(R.id.start_logo_logo);
        ImageView issp_logo = (ImageView) findViewById(R.id.issp_logo);

        logo.setImageBitmap(ImageFunctions.decodeImage(getResources(), R.drawable.roomie_logo_shadow, 400,400));
        logo.clearAnimation();

        issp_logo.setImageBitmap(ImageFunctions.decodeImage(getResources(), R.drawable.white_issp, 400,400));
        issp_logo.clearAnimation();

        Animation show = AnimationUtils.loadAnimation(getApplicationContext(), R.anim.animacja_logo_start);
        show.setStartOffset(600);//1600
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
                try {
                    WebSocket_Client.run_webSocket();
                } catch (URISyntaxException e) {
                    e.printStackTrace();
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
                Intent Main_Menu = new Intent(getBaseContext(),Roomie_Main_Login.class);
                startActivity(Main_Menu);
                finish();
                System.gc();

            }
        });
    }

}
