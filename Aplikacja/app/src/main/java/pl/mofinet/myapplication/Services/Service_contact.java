package pl.mofinet.myapplication.Services;

import android.app.AlertDialog;
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
import android.widget.Toast;

import pl.mofinet.myapplication.Funkcje.Client;
import pl.mofinet.myapplication.Funkcje.MyFunc;
import pl.mofinet.myapplication.MainMenu.Hotel_services;
import pl.mofinet.myapplication.R;

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
        background.setImageBitmap(MyFunc.decodeImage(getResources(),R.drawable.table_bg,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));

        call = (ImageButton) findViewById(R.id.button_call);
        call.setImageBitmap(MyFunc.decodeImage(getResources(),R.drawable.phone_flat,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));


        background.setImageBitmap(MyFunc.decodeImage(getResources(),R.drawable.table_bg,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));

        call.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
             dialContactPhone("67555555");
            }

            // }

        });
        final AlertDialog.Builder builder = new AlertDialog.Builder(this);
        SEND = (Button) findViewById(R.id.buttonSEND);
        SEND.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                String info="CONTACT#";
                   EditText edit = (EditText) findViewById(R.id.edit_wiadomosc);
                if(edit.length()>2)
                {
                    try{
                    info+=edit.getText();
                    Client.sendRequest(info);
                    Service_contact.super.finish();
                    Toast.makeText(Service_contact.this, "Twoja prośba została wysłana pomyślnie",
                            Toast.LENGTH_LONG).show();}
                    catch  (Exception e){
                        MyFunc.popupInfo("Problem z Serverem","Nie można nawiązać połączenia z Serwerem. Proszę spróbować później",builder);
                    }
                }
                else MyFunc.popupInfo("Pusta Wiadomość","Wiadomośc powinna posiadać przynajmniej 2 znaki",builder);


            }

        });
    }
    @Override
    public void onBackPressed() {
        Intent intent = new Intent(this, Hotel_services.class);
        startActivity(intent);
        finish();
    }
    private void dialContactPhone(final String phoneNumber) {
        startActivity(new Intent(Intent.ACTION_DIAL, Uri.fromParts("tel", phoneNumber, null)));
    }
}
