package pl.mofinet.myapplication;

import android.Manifest;

import android.content.Context;

import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;

import android.os.Bundle;
import android.support.design.widget.TabLayout;

import android.support.v4.app.FragmentActivity;
import android.support.v4.view.ViewPager;


import org.osmdroid.api.IMapController;

import org.osmdroid.bonuspack.overlays.Polyline;

import org.osmdroid.bonuspack.routing.Road;

import org.osmdroid.util.GeoPoint;

import org.osmdroid.views.MapView;


import android.support.v7.app.AppCompatActivity;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.ImageView;


import com.google.android.gms.maps.CameraUpdateFactory;
import com.google.android.gms.maps.GoogleMap;
import com.google.android.gms.maps.OnMapReadyCallback;
import com.google.android.gms.maps.SupportMapFragment;
import com.google.android.gms.maps.model.LatLng;
import com.google.android.gms.maps.model.MarkerOptions;


public class Hotel_map  extends AppCompatActivity implements OnMapReadyCallback {
    final BitmapFactory.Options options = new BitmapFactory.Options();
    ImageView background;
    int mIncr = 10000;
    Button show_panorama, show_rynek, show_ostrow, show_zoo, show_uwr, show_muzeum, show_uwr_inf, show_dominikanska;
    static Context HotelActivity;
    public static final  LatLng narodowe_point = new LatLng(51.116131, 17.039849);
    public static final  LatLng panorama_point = new LatLng(51.110129, 17.044343);
    public static final LatLng dominikanska_point = new LatLng(51.108112, 17.039698);
    public static final LatLng muzeum_point = new LatLng(51.110564, 17.047788);
    public static final LatLng inf_uwr_point = new LatLng(51.110941, 17.053088);
    public static final LatLng uwr_point = new LatLng(51.113663, 17.034720);
    public static final LatLng wyspa_point = new LatLng(51.116004, 17.037572);
    public static final LatLng ostrów_point = new LatLng(51.114463, 17.046734);
    public static final LatLng zoo_point = new LatLng(51.106442, 17.073065);
    public static final LatLng rynek_point = new LatLng(51.109454, 17.031332);
    public static IMapController mapController;
    public static GeoPoint myLocation;
    public static GeoPoint currentLocation;
    static Road road;
    static Polyline roadOverlay;
    public static MapView mapView;
    ViewGroup container;

    public static GoogleMap mMap;
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_hotel_map);

        HotelActivity = this;

        TabLayout tabLayout = (TabLayout) findViewById(R.id.tab_layout);
        tabLayout.addTab(tabLayout.newTab().setText("Muzea"));
        tabLayout.addTab(tabLayout.newTab().setText("Zabytki"));
        tabLayout.addTab(tabLayout.newTab().setText("Restauracje"));
        tabLayout.addTab(tabLayout.newTab().setText("Galerie"));
        tabLayout.addTab(tabLayout.newTab().setText("Rozrywka"));
        tabLayout.setTabGravity(TabLayout.GRAVITY_CENTER);

        final ViewPager viewPager = (ViewPager) findViewById(R.id.pager);
        final Menu_page_adapter adapter = new Menu_page_adapter
                (getSupportFragmentManager(), tabLayout.getTabCount());
        viewPager.setAdapter(adapter);
        viewPager.addOnPageChangeListener(new TabLayout.TabLayoutOnPageChangeListener(tabLayout));
        tabLayout.setOnTabSelectedListener(new TabLayout.OnTabSelectedListener() {
            @Override
            public void onTabSelected(TabLayout.Tab tab) {
                viewPager.setCurrentItem(tab.getPosition());
            }

            @Override
            public void onTabUnselected(TabLayout.Tab tab) {

            }

            @Override
            public void onTabReselected(TabLayout.Tab tab) {

            }
        });



        background = (ImageView) findViewById(R.id.background_map);
        background.setImageBitmap(decodeImage(getResources(),R.mipmap.map_bg,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));





        SupportMapFragment mapFragment = (SupportMapFragment) getSupportFragmentManager()
                        .findFragmentById(R.id.map);
                mapFragment.getMapAsync(this);



        }

        @Override
        public void onMapReady(GoogleMap googleMap) {
            mMap = googleMap;

            // Add a marker in Sydney, Australia, and move the camera.
            LatLng sydney = new LatLng(51.116131, 17.039849);
     /*       mMap.addMarker(new MarkerOptions().position(rynek_point).title("Marker in Sydney"));
            mMap.addMarker(new MarkerOptions().position(narodowe_point).title("Marker in Sydney"));
            mMap.addMarker(new MarkerOptions().position(ostrów_point).title("Marker in Sydney"));
            mMap.addMarker(new MarkerOptions().position(wyspa_point).title("Marker in Sydney"));
            mMap.addMarker(new MarkerOptions().position(uwr_point).title("Marker in Sydney"));
            mMap.addMarker(new MarkerOptions().position(inf_uwr_point).title("Marker in Sydney"));
            mMap.addMarker(new MarkerOptions().position(zoo_point).title("Marker in Sydney"));
            mMap.addMarker(new MarkerOptions().position(dominikanska_point).title("Marker in Sydney"));
            mMap.addMarker(new MarkerOptions().position(muzeum_point).title("Marker in Sydney"));
            mMap.addMarker(new MarkerOptions().position(panorama_point).title("Marker in Sydney"));
            mMap.addMarker(new MarkerOptions().position(narodowe_point).title("Marker in Sydney"));*/
            mMap.setMapType(1);
            mMap.moveCamera(CameraUpdateFactory.newLatLngZoom(rynek_point, 15.0f));

        }


    @Override
    public void onBackPressed() {
        finish();
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






