package pl.mofinet.myapplication.MainMenu;

import android.app.Activity;
import android.content.Intent;
import android.graphics.BitmapFactory;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
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


public class Hotel_services extends AppCompatActivity {

    Button food,repair,items,clean,contact;
    ImageView background;
    public static Activity Activity;
    final BitmapFactory.Options options = new BitmapFactory.Options();


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                WindowManager.LayoutParams.FLAG_FULLSCREEN);
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_hotel_services);

        clean = (Button) findViewById(R.id.button_clean_room);
    clean.setOnClickListener(new View.OnClickListener() {
        public void onClick(View v) {

            Intent clean = new Intent(Hotel_services.this, Service_clean.class);
            Hotel_services.this.startActivity(clean);

        }

        // }

    });
        items = (Button) findViewById(R.id.button_fill_needs);
        items.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {

                Intent items = new Intent(Hotel_services.this, Service_room.class);
                Hotel_services.this.startActivity(items);

            }

            // }

        });



        food = (Button) findViewById(R.id.button_order_food);
        food.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent food = new Intent(Hotel_services.this, Service_food.class);
                Hotel_services.this.startActivity(food);
            }

            // }

        });

        repair = (Button) findViewById(R.id.button_repair_room);
        repair.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent repair = new Intent(Hotel_services.this, Service_repair.class);
                Hotel_services.this.startActivity(repair);
            }

            // }

        });


        contact = (Button) findViewById(R.id.button_reception);
        contact.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Intent contact = new Intent(Hotel_services.this, Service_contact.class);
                Hotel_services.this.startActivity(contact);
            }

            // }

        });

        Activity=this;

    }
    public void onBackPressed() {
        Activity.finish();
    }



}
