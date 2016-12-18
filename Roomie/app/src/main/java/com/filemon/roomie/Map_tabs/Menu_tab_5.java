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


public class Menu_tab_5 extends Fragment {

    GoogleMap mMap;
    public Menu_tab_5(GoogleMap map)
    {
        mMap = map;
    }
    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        View v = inflater.inflate(R.layout.tab_menu_5, container, false);

        final LatLng zoo_point = new LatLng(51.106442, 17.073065);

        Button show_zoo = (Button) v.findViewById(R.id.show_zoo_but);
        show_zoo.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(zoo_point, 16.0f));
            }

        });

        return v;



    }
}