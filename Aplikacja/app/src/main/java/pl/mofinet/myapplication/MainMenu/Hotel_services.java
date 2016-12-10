package pl.mofinet.myapplication.MainMenu;

import android.app.Activity;
import android.content.Intent;
import android.graphics.BitmapFactory;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.ImageView;

import pl.mofinet.myapplication.R;
import pl.mofinet.myapplication.Services.Service_clean;
import pl.mofinet.myapplication.Services.Service_contact;
import pl.mofinet.myapplication.Services.Service_food;
import pl.mofinet.myapplication.Services.Service_repair;
import pl.mofinet.myapplication.Services.Service_room;
import pl.mofinet.myapplication.Start.MainActivity;


public class Hotel_services extends AppCompatActivity {

    Button food,repair,items,clean,contact;
    final BitmapFactory.Options options = new BitmapFactory.Options();


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        Runtime.getRuntime().gc();

        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                WindowManager.LayoutParams.FLAG_FULLSCREEN);
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_hotel_services);

        clean = (Button) findViewById(R.id.button_clean_room);
    clean.setOnClickListener(new View.OnClickListener() {
        public void onClick(View v) {

            Intent clean = new Intent(getApplicationContext(), Service_clean.class);
            clean.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
            startActivity(clean);
            finish();

        }

        // }

    });
        items = (Button) findViewById(R.id.button_fill_needs);
        items.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                System.gc();
                Intent items = new Intent(getApplicationContext(), Service_room.class);
                items.setFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
               startActivity(items);
                finish();
            }

            // }

        });



        food = (Button) findViewById(R.id.button_order_food);
        food.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent food = new Intent(getApplicationContext(), Service_food.class);
                food.setFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
               startActivity(food);
                finish();
            }

            // }

        });

        repair = (Button) findViewById(R.id.button_repair_room);
        repair.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent repair = new Intent(getApplicationContext(), Service_repair.class);
                repair.setFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
               startActivity(repair);
                finish();
            }

            // }

        });


        contact = (Button) findViewById(R.id.button_reception);
        contact.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent contact = new Intent(getApplicationContext(), Service_contact.class);
                contact.setFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
               startActivity(contact);
                finish();

            }

            // }

        });



    }
    @Override
    public void onBackPressed() {
        Intent intent = new Intent(getApplicationContext(), MainActivity.class);
        startActivity(intent);
        finish();
    }



}
