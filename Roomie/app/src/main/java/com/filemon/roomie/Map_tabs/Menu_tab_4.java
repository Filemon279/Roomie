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

public class Menu_tab_4 extends Fragment {

    GoogleMap mMap;
    public Menu_tab_4(GoogleMap map)
    {
        mMap = map;
    }
    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        View v = inflater.inflate(R.layout.tab_menu_4, container, false);

        final LatLng dominikanska_point = new LatLng(51.108112, 17.039698);
        final LatLng renoma_point = new LatLng(51.10362299, 17.03128159);
        final LatLng arkady_point = new LatLng(51.09924725, 17.0287469);
        final LatLng skyTower_point = new LatLng(51.09429161, 17.0201236);
        final LatLng magnolia_point = new LatLng(51.11944499, 16.98969126);


        Button show_dominikanska = (Button) v.findViewById(R.id.show_galeria_but);
        show_dominikanska.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(dominikanska_point, 15.0f));
            }

        });

        Button show_renoma = (Button) v.findViewById(R.id.show_renoma_but);
        show_renoma.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(renoma_point, 15.0f));
            }

        });

        Button show_arkady = (Button) v.findViewById(R.id.show_arkady_but);
        show_arkady.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(arkady_point, 15.0f));
            }

        });

        Button show_skyTower = (Button) v.findViewById(R.id.show_skyTower_but);
        show_skyTower.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(skyTower_point, 15.0f));
            }

        });

        Button show_magnolia = (Button) v.findViewById(R.id.show_magnolia_but);
        show_magnolia.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(magnolia_point, 15.0f));
            }

        });

        return v;
    }
}