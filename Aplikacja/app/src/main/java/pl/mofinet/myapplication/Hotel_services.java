package pl.mofinet.myapplication;

import android.app.Activity;
import android.content.Intent;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.ImageView;

import com.google.android.gms.maps.CameraUpdateFactory;


public class Hotel_services extends AppCompatActivity {

    Button food,repair,items,clean;
    ImageView background;
    static Activity to;
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

to=this;

    }
    public void onBackPressed() {
        to.finish();
    }



}
