package com.filemon.roomie.Services;

import android.app.AlertDialog;
import android.content.Context;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.CheckBox;

import com.filemon.roomie.R;
import com.filemon.roomie.WebSocket_Client;

import xdroid.toaster.Toaster;


public class Service_room extends AppCompatActivity {
    Button SEND;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                WindowManager.LayoutParams.FLAG_FULLSCREEN);
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_service_room);

        SEND = (Button) findViewById(R.id.buttonSEND);
        SEND.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                String info="ROOM#";

                info += "Proszę o uzupełnienie: ";
                String puste = info;
                CheckBox it = (CheckBox) findViewById(R.id.checkro_alkohole);
                if (it.isChecked()) info += "Alkoholi | ";
                it = (CheckBox) findViewById(R.id.checkro_baterie);
                if (it.isChecked()) info += "Baterii | ";
                it = (CheckBox) findViewById(R.id.checkro_kapcie);
                if (it.isChecked()) info += "Kapci | ";
                it = (CheckBox) findViewById(R.id.checkro_mydlo);
                if (it.isChecked()) info += "Mydło | ";
                it = (CheckBox) findViewById(R.id.checkro_napojesoki);
                if (it.isChecked()) info += "Napoi i soków | ";
                it = (CheckBox) findViewById(R.id.checkro_odswiezacz);
                if (it.isChecked()) info += "Odświeżacza | ";
                it = (CheckBox) findViewById(R.id.checkro_papier);
                if (it.isChecked()) info += "Papieru toaletowego | ";
                it = (CheckBox) findViewById(R.id.checkro_posciel);
                if (it.isChecked()) info += "Pościeli | ";
                it = (CheckBox) findViewById(R.id.checkro_poszewki);
                if (it.isChecked()) info += "Poszewek | ";
                it = (CheckBox) findViewById(R.id.checkro_przekaski);
                if (it.isChecked()) info += "Przekąsek | ";
                it = (CheckBox) findViewById(R.id.checkro_przescieradlo);
                if (it.isChecked()) info += "Prześcieradła | ";
                it = (CheckBox) findViewById(R.id.checkro_recznik);
                if (it.isChecked()) info += "Ręcznika |";
                it = (CheckBox) findViewById(R.id.checkro_szampon);
                if (it.isChecked()) info += "Szamponu | ";
                it = (CheckBox) findViewById(R.id.checkro_szlafrok);
                if (it.isChecked()) info += "Szlafroku | ";
                it = (CheckBox) findViewById(R.id.checkro_woda);
                if (it.isChecked()) info += "Wody | ";
                it = (CheckBox) findViewById(R.id.checkro_zastawa);
                if (it.isChecked()) info += "Zastawy";
                if(info.equals(puste)) Toaster.toast("Nic nie zaznaczono");
                else{
                    WebSocket_Client.client_socket.send(info);
                }
            }

        });
    }
}
