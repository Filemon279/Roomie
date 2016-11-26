package pl.mofinet.myapplication;

import android.content.Intent;
import android.net.Uri;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageButton;
import android.widget.ImageView;
import android.widget.RadioButton;

public class Service_contact extends AppCompatActivity {
    ImageButton call;
    Button SEND;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                WindowManager.LayoutParams.FLAG_FULLSCREEN);
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_service_contact);
        ImageView background = (ImageView) findViewById(R.id.background_room);
        background.setImageBitmap(ImageLoad.decodeImage(getResources(),R.mipmap.table_bg,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));

        call = (ImageButton) findViewById(R.id.imageButton);
        call.setImageBitmap(ImageLoad.decodeImage(getResources(),R.drawable.phone_flat,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));


        background.setImageBitmap(ImageLoad.decodeImage(getResources(),R.mipmap.table_bg,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));

        call.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
             dialContactPhone("67555555");
            }

            // }

        });

        SEND = (Button) findViewById(R.id.buttonSEND);
        SEND.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                String info="CONTACT#";
                   EditText edit = (EditText) findViewById(R.id.edit_wiadomosc);
                if(edit.length()>2)
                {
                    info+=edit.getText();
                    Client.sendRequest(info);
                }


            }

        });
    }

    private void dialContactPhone(final String phoneNumber) {
        startActivity(new Intent(Intent.ACTION_DIAL, Uri.fromParts("tel", phoneNumber, null)));
    }
}
