package com.filemon.roomie;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.util.TimeUtils;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.TextView;

import java.net.URISyntaxException;

public class Roomie_Error extends AppCompatActivity {


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        WebSocket_Client.errorWindow=true;
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
        WindowManager.LayoutParams.FLAG_FULLSCREEN);

        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_roomie__error);

        WebSocket_Client.client_socket.close();
        try {
            WebSocket_Client.run_webSocket();
        } catch (URISyntaxException e) {
            e.printStackTrace();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        new Thread(new Runnable() {
                    public void run() {
                       while(true)
                       {
                           if(WebSocket_Client.WsConnectionStatus==1) Roomie_Error.this.finish();
                           try {
                               Thread.sleep(500);
                           } catch (InterruptedException e) {
                               e.printStackTrace();
                           }
                       }
                    }
                }).start();

        Intent iin= getIntent();
        Bundle b = iin.getExtras();

        if(b!=null)
        {
            String info =(String) b.get("Info");
            TextView infoView = (TextView) findViewById(R.id.textView_info_error);
            infoView.setText(info);
        }
    }

    @Override
    protected void onStop() {
        WebSocket_Client.errorWindow=false;
        super.onStop();
    }

    @Override
    public void onBackPressed() {

    }
    @Override
    protected void onDestroy() {
        WebSocket_Client.errorWindow=false;
        super.onDestroy();
    }

}
