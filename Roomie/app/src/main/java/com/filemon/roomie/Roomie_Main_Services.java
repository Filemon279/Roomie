package com.filemon.roomie;

import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import com.filemon.roomie.Services.Service_clean;
import com.filemon.roomie.Services.Service_contact;
import com.filemon.roomie.Services.Service_food;
import com.filemon.roomie.Services.Service_repair;
import com.filemon.roomie.Services.Service_room;


public class Roomie_Main_Services extends AppCompatActivity {


    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        Button food,repair,items,clean,contact;
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
         WindowManager.LayoutParams.FLAG_FULLSCREEN);
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_hotel_services);

        clean = (Button) findViewById(R.id.button_clean_room);
        clean.setOnClickListener(new View.OnClickListener() {
        public void onClick(View v) {
            Intent clean = new Intent(getBaseContext(), Service_clean.class);
            startActivity(clean);
        }
        });

        items = (Button) findViewById(R.id.button_fill_needs);
        items.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent items = new Intent(getBaseContext(), Service_room.class);
                startActivity(items);
                finish();
            }

            // }

        });

        repair = (Button) findViewById(R.id.button_repair_room);
        repair.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent repair = new Intent(getBaseContext(), Service_repair.class);
               startActivity(repair);
                finish();
            }

            // }

        });

       /* contact = (Button) findViewById(R.id.button_reception);
        contact.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent contact = new Intent(getBaseContext(), Service_contact.class);
                contact.setFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
               startActivity(contact);
                finish();
            }

            // }

        });

        food = (Button) findViewById(R.id.button_order_food);
        food.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent food = new Intent(getBaseContext(), Service_food.class);
                startActivity(food);
                finish();
            }

            // }

        });*/
    }
}
