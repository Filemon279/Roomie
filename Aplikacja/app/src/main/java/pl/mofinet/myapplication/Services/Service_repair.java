package pl.mofinet.myapplication.Services;

import android.app.AlertDialog;
import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.RadioButton;
import android.widget.Toast;

import pl.mofinet.myapplication.Funkcje.Client;
import pl.mofinet.myapplication.Funkcje.MyFunc;
import pl.mofinet.myapplication.MainMenu.Hotel_services;
import pl.mofinet.myapplication.R;

public class Service_repair extends AppCompatActivity {
    Button SEND;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                WindowManager.LayoutParams.FLAG_FULLSCREEN);
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_service_repair);
        ImageView background = (ImageView) findViewById(R.id.background_room);
        background.setImageBitmap(MyFunc.decodeImage(getResources(),R.drawable.table_bg,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));

        final AlertDialog.Builder builder = new AlertDialog.Builder(this);
        SEND = (Button) findViewById(R.id.buttonSEND);
        SEND.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                String info="REPAIR#";

                EditText edit = (EditText) findViewById(R.id.editr_uwagi);

                info += "Zgłaszam usterkę: ";
                String puste = info;
                CheckBox it = (CheckBox) findViewById(R.id.checkr_agdrtv);
                if (it.isChecked()) info += "AGD/RTV | ";
                it = (CheckBox) findViewById(R.id.checkr_dekoder);
                if (it.isChecked()) info += "Dekodera | ";
                it = (CheckBox) findViewById(R.id.checkr_drzwi);
                if (it.isChecked()) info += "Drzwi | ";
                it = (CheckBox) findViewById(R.id.checkr_hydraulika);
                if (it.isChecked()) info += "Hydrauliki | ";
                it = (CheckBox) findViewById(R.id.checkr_internet);
                if (it.isChecked()) info += "Internetu | ";
                it = (CheckBox) findViewById(R.id.checkr_klima);
                if (it.isChecked()) info += "Klimatyzacji | ";
                it = (CheckBox) findViewById(R.id.checkr_meble);
                if (it.isChecked()) info += "Mebli | ";
                it = (CheckBox) findViewById(R.id.checkr_ogrzewanie);
                if (it.isChecked()) info += "Ogrzewania | ";
                it = (CheckBox) findViewById(R.id.checkr_okna);
                if (it.isChecked()) info += "Okna | ";
                it = (CheckBox) findViewById(R.id.checkr_oswietlenie);
                if (it.isChecked()) info += "Oświetlenia | ";
                it = (CheckBox) findViewById(R.id.checkr_prad);
                if (it.isChecked()) info += "Prądu | ";
                it = (CheckBox) findViewById(R.id.checkr_telewizor);
                if (it.isChecked()) info += "Telewizora";
                if (edit.length() > 1) info += "\nDodatkowe Uwagi: " + edit.getText();

                if(info==puste){

                    MyFunc.popupInfo("Błędny komunikat","Proszę wybrać przynajmniej jedną usterkę",builder);
                }

                else{
                    try{
                    Client.sendRequest(info);
                    Service_repair.super.finish();
                    Toast.makeText(Service_repair.this, "Twoja prośba została wysłana pomyślnie",
                            Toast.LENGTH_LONG).show();}
                    catch  (Exception e){
                        MyFunc.popupInfo("Problem z Serverem","Nie można nawiązać połączenia z Serwerem. Proszę spróbować później",builder);
                    }
                }


            }

        });



    }
    @Override
    public void onBackPressed() {
        Intent intent = new Intent(this, Hotel_services.class);
        startActivity(intent);
        finish();
    }
}
