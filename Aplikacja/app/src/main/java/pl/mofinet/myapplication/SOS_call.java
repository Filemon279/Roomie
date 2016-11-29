package pl.mofinet.myapplication;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.ImageButton;
import android.widget.ImageView;

import pl.mofinet.myapplication.Funkcje.Client;
import pl.mofinet.myapplication.Funkcje.MyFunc;
import pl.mofinet.myapplication.MainMenu.Hotel_sos;
import pl.mofinet.myapplication.Start.MainActivity;

public class SOS_call extends AppCompatActivity {
    ImageButton emergrncy,call,route;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
        WindowManager.LayoutParams.FLAG_FULLSCREEN);
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_sos_call);

        ImageView background = (ImageView) findViewById(R.id.background_call);
        background.setImageBitmap(MyFunc.decodeImage(getResources(),R.mipmap.zenit_bg,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));

        emergrncy = (ImageButton) findViewById(R.id.button_sos_emergency);
        emergrncy.setImageBitmap(MyFunc.decodeImage(getResources(),R.drawable.emergency,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));
        emergrncy.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
          if(MainActivity.mLastLocation!=null){
               String coords=String.valueOf(MainActivity.mLastLocation.getLatitude())+":"+String.valueOf(MainActivity.mLastLocation.getLongitude());
                Client.sendRequest("HELP#"+coords);}
            }

            // }

        });



        call = (ImageButton) findViewById(R.id.image_sos_call);
        call.setImageBitmap(MyFunc.decodeImage(getResources(),R.drawable.phone_flat,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));

        route = (ImageButton) findViewById(R.id.image_sos_route);
        route.setImageBitmap(MyFunc.decodeImage(getResources(),R.drawable.show_route,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));

    }
}
