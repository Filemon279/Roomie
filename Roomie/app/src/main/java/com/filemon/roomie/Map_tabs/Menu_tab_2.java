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

public class Menu_tab_2 extends Fragment {

    GoogleMap mMap;
    public Menu_tab_2(GoogleMap map)
    {
        mMap = map;
    }

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {


        View v = inflater.inflate(R.layout.tab_menu_2, container, false);


        final LatLng uwr_point = new LatLng(51.113663, 17.034720);
        final LatLng ostrow_point = new LatLng(51.114463, 17.046734);
        final LatLng rynek_point = new LatLng(51.109454, 17.031332);

        Button show_rynek = (Button) v.findViewById(R.id.show_rynek_but);
        Button show_ostrow = (Button) v.findViewById(R.id.show_ostrow_but);
        Button show_uwr = (Button) v.findViewById(R.id.show_uwr_but);


        show_ostrow.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {

                mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(ostrow_point, 15.0f));
            }

        });
        show_uwr.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {

                mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(uwr_point, 15.0f));

            }

        });

        show_rynek.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(rynek_point, 15.0f));
            }

        });

        return v;
    }
}