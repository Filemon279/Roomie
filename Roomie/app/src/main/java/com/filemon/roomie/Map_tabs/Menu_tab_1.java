package com.filemon.roomie.Map_tabs;

import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;

import com.filemon.roomie.R;
import com.google.android.gms.maps.CameraUpdateFactory;
import com.google.android.gms.maps.GoogleMap;
import com.google.android.gms.maps.model.LatLng;


public class Menu_tab_1 extends Fragment {

    GoogleMap mMap;
    public Menu_tab_1(GoogleMap map)
    {
    mMap = map;
    }

    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {

        View v = inflater.inflate(R.layout.tab_menu_1, container, false);

        final LatLng panorama_point = new LatLng(51.110129, 17.044343);
        final LatLng muzeum_point = new LatLng(51.110564, 17.047788);

        Button show_panorama = (Button) v.findViewById(R.id.show_panorama_but);
        Button show_muzeum = (Button) v.findViewById(R.id.show_muzeum_but);


        show_panorama.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
        mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(panorama_point, 16.0f));

            }

        });


        show_muzeum.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
          mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(muzeum_point, 16.0f));
            }

        });

        return v;



    }


}