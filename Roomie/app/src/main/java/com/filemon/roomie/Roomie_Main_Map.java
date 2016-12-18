package com.filemon.roomie;


import android.graphics.BitmapFactory;
import android.os.Bundle;
import android.support.design.widget.TabLayout;
import android.support.v4.view.ViewPager;
import android.support.v7.app.AppCompatActivity;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;

import com.filemon.roomie.Map_tabs.Menu_page_adapter;
import com.google.android.gms.maps.CameraUpdateFactory;
import com.google.android.gms.maps.GoogleMap;
import com.google.android.gms.maps.OnMapReadyCallback;
import com.google.android.gms.maps.SupportMapFragment;
import com.google.android.gms.maps.model.LatLng;
import com.google.android.gms.maps.model.MarkerOptions;



public class Roomie_Main_Map extends AppCompatActivity implements OnMapReadyCallback
{
    private  BitmapFactory.Options options = new BitmapFactory.Options();

    private LatLng narodowe_point = new LatLng(51.116131, 17.039849);
    private LatLng panorama_point = new LatLng(51.110129, 17.044343);

    //Galerie
    private LatLng dominikanska_point = new LatLng(51.108112, 17.039698);
    private LatLng renoma_point = new LatLng(51.10362299, 17.03128159);
    private LatLng arkady_point = new LatLng(51.09924725, 17.0287469);
    private LatLng skyTower_point = new LatLng(51.09429161, 17.0201236);
    private LatLng magnolia_point = new LatLng(51.11944499, 16.98969126);


    private LatLng muzeum_point = new LatLng(51.110564, 17.047788);
    private LatLng uwr_point = new LatLng(51.113663, 17.034720);
    private LatLng wyspa_point = new LatLng(51.116004, 17.037572);
    private LatLng ostrow_point = new LatLng(51.114463, 17.046734);
    private LatLng zoo_point = new LatLng(51.106442, 17.073065);
    private LatLng rynek_point = new LatLng(51.109454, 17.031332);

    public GoogleMap mMap;

    @Override
    public void onCreate(Bundle savedInstanceState) {


        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                WindowManager.LayoutParams.FLAG_FULLSCREEN);
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_hotel_map);




            SupportMapFragment mapFragment = (SupportMapFragment) getSupportFragmentManager()
            .findFragmentById(R.id.map);
            mapFragment.getMapAsync(this);

        }

    @Override
    public void onMapReady(GoogleMap googleMap)
    {
        mMap = googleMap;
        mMap.setMapType(1);
        mMap.moveCamera(CameraUpdateFactory.newLatLngZoom(rynek_point, 15.0f));

        //Dodajmy znaczniki
        mMap.addMarker(new MarkerOptions().position(muzeum_point).title("Muzeum Główne Wrocław"));
        mMap.addMarker(new MarkerOptions().position(panorama_point).title("Panorama Raclawicka"));

        mMap.addMarker(new MarkerOptions().position(ostrow_point).title("Ostrów Tumski"));
        mMap.addMarker(new MarkerOptions().position(uwr_point).title("Uniwersytet Wrocławski"));
        mMap.addMarker(new MarkerOptions().position(rynek_point).title("Rynek Wrocławski"));

        mMap.addMarker(new MarkerOptions().position(dominikanska_point).title("Galeria Dominiksnska"));
        mMap.addMarker(new MarkerOptions().position(renoma_point).title("Renoma"));
        mMap.addMarker(new MarkerOptions().position(arkady_point).title("Arkady"));
        mMap.addMarker(new MarkerOptions().position(skyTower_point).title("SkyTower"));
        mMap.addMarker(new MarkerOptions().position(magnolia_point).title("Magnolia Park"));

        mMap.addMarker(new MarkerOptions().position(zoo_point).title("Zoo Wrocławskie"));



        TabLayout tabLayout = (TabLayout) findViewById(R.id.tab_layout);
        tabLayout.addTab(tabLayout.newTab().setText("Muzea"));
        tabLayout.addTab(tabLayout.newTab().setText("Zabytki"));
        tabLayout.addTab(tabLayout.newTab().setText("Restauracje"));
        tabLayout.addTab(tabLayout.newTab().setText("Galerie"));
        tabLayout.addTab(tabLayout.newTab().setText("Rozrywka"));
        tabLayout.setTabGravity(TabLayout.GRAVITY_CENTER);

        final ViewPager viewPager = (ViewPager) findViewById(R.id.pager);
        Menu_page_adapter adapter = new Menu_page_adapter(getSupportFragmentManager(), tabLayout.getTabCount(), mMap);
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

    }

}






