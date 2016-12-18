package com.filemon.roomie.Services;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.ImageButton;
import com.filemon.roomie.ImageFunctions;
import com.filemon.roomie.R;


public class Service_contact extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {

        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                WindowManager.LayoutParams.FLAG_FULLSCREEN);
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_service_contact);

        ImageButton call = (ImageButton) findViewById(R.id.button_call);
        //call.setImageBitmap(ImageFunctions.decodeImage(getResources(), R.drawable.phone_flat, getWindowManager().getDefaultDisplay().getWidth(), getWindowManager().getDefaultDisplay().getHeight()));

        call.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                dialContactPhone("67555555");
            }
        });
    }

    private void dialContactPhone(final String phoneNumber) {
        startActivity(new Intent(Intent.ACTION_DIAL, Uri.fromParts("tel", phoneNumber, null)));
    }
}
