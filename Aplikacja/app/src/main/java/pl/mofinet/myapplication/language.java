package pl.mofinet.myapplication;

import android.content.Intent;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.drawable.BitmapDrawable;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageButton;
import android.widget.ImageView;

public class language extends AppCompatActivity {
    final BitmapFactory.Options options = new BitmapFactory.Options();

    ImageButton pol,eng,de;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_language);

        ImageView background = (ImageView) findViewById(R.id.start_logo_language);
        background.setImageBitmap(decodeImage(getResources(),R.mipmap.service_bg,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));
        pol = (ImageButton) findViewById(R.id.pl_flag);
        de = (ImageButton) findViewById(R.id.de_flat_but);
        eng = (ImageButton) findViewById(R.id.uk_flag_but);
        pol.setBackground(new BitmapDrawable(decodeImage(getResources(),R.drawable.pl_flag,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight())));
        de.setBackground(new BitmapDrawable(decodeImage(getResources(),R.drawable.de_flag,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight())));
        eng.setBackground(new BitmapDrawable(decodeImage(getResources(), R.drawable.uk_flag, getWindowManager().getDefaultDisplay().getWidth(), getWindowManager().getDefaultDisplay().getHeight())));




        pol.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {

                Intent oknoGlowne = new Intent(language.this, LoginActivity.class);
                language.this.startActivity(oknoGlowne);
                finish();

            }
        });

        de.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {

                Intent oknoGlowne = new Intent(language.this, LoginActivity.class);
                language.this.startActivity(oknoGlowne);
                finish();

            }
        });

        eng.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {

                Intent oknoGlowne = new Intent(language.this, LoginActivity.class);
                language.this.startActivity(oknoGlowne);
                finish();

            }
        });
    }

    public static int calculateInSampleSize(
            BitmapFactory.Options options, int reqWidth, int reqHeight) {
        // Raw height and width of image
        final int height = options.outHeight;
        final int width = options.outWidth;
        int inSampleSize = 1;

        if (height > reqHeight || width > reqWidth) {

            final int halfHeight = height / 2;
            final int halfWidth = width / 2;

            // Calculate the largest inSampleSize value that is a power of 2 and keeps both
            // height and width larger than the requested height and width.
            while ((halfHeight / inSampleSize) > reqHeight
                    && (halfWidth / inSampleSize) > reqWidth) {
                inSampleSize *= 2;
            }
        }

        return inSampleSize;
    }

    public static Bitmap decodeImage(Resources res, int resId,
                                     int reqWidth, int reqHeight) {

        // First decode with inJustDecodeBounds=true to check dimensions
        final BitmapFactory.Options options = new BitmapFactory.Options();
        options.inJustDecodeBounds = true;
        BitmapFactory.decodeResource(res, resId, options);

        // Calculate inSampleSize
        options.inSampleSize = calculateInSampleSize(options, reqWidth, reqHeight);

        // Decode bitmap with inSampleSize set
        options.inJustDecodeBounds = false;
        return BitmapFactory.decodeResource(res, resId, options);
    }

}
