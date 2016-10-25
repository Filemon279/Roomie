package pl.mofinet.myapplication;


import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import com.google.android.gms.maps.CameraUpdateFactory;
import com.google.android.gms.maps.model.LatLng;

public class Menu_tab_3 extends Fragment {

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        final LatLng rynek_point = Hotel_map.rynek_point;
        Hotel_map.mMap.clear();
       // Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(rynek_point, 16.0f));
        return inflater.inflate(R.layout.tab_menu_3, container, false);
    }
}