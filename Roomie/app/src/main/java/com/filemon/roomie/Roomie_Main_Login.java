package com.filemon.roomie;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;

public class Roomie_Main_Login extends AppCompatActivity {
    Thread getLogin;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                WindowManager.LayoutParams.FLAG_FULLSCREEN);
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_roomie__main__login);
        ImageView logo = (ImageView) findViewById(R.id.start_logo_logo);
        logo.setImageBitmap(ImageFunctions.decodeImage(getResources(), R.drawable.roomie_logo_shadow, 430, 430));

        Button sos = (Button) findViewById(R.id.button_login);
        final EditText login = (EditText) findViewById(R.id.editText_login);
        final EditText password = (EditText) findViewById(R.id.editText_password);


        sos.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                if (WebSocket_Client.WsConnectionStatus == 1){
                    WebSocket_Client.client_socket.send("#" + login.getText() + "#" + password.getText());
                    password.setText("");
                }
            }

        });


        getLogin = new Thread() {
            public void run() {
                while (true) {
                    if (WebSocket_Client.logged) {
                        Intent window_sos = new Intent(getBaseContext(), Roomie_Main_Menu.class);
                        startActivity(window_sos);
                        Roomie_Main_Login.this.finish();
                        System.gc();
                        getLogin.interrupt();
                        break;

                    }
                    try {
                        Thread.sleep(1000);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
            }
        };

        getLogin.start();
    }





    @Override
    public void onBackPressed() {
    }
    @Override
    public void onDestroy() {
        getLogin.interrupt();
        super.onDestroy();

    }

}
