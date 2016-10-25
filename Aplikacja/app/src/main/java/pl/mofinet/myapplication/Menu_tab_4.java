package pl.mofinet.myapplication;


import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;

import com.google.android.gms.maps.CameraUpdateFactory;
import com.google.android.gms.maps.model.LatLng;
import com.google.android.gms.maps.model.MarkerOptions;

import org.osmdroid.api.IMapController;
import org.osmdroid.util.GeoPoint;

import java.util.ArrayList;

public class Menu_tab_4 extends Fragment {

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        final LatLng dominikanska_point = Hotel_map.dominikanska_point;
        final  LatLng narodowe_point = Hotel_map.narodowe_point;
        final IMapController mapController;
        mapController = Hotel_map.mapController;
        Hotel_map.mMap.clear();
      //  Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(dominikanska_point, 15.0f));
        Hotel_map.mMap.addMarker(new MarkerOptions().position(dominikanska_point).title("Marker in Sydney"));


        View v = inflater.inflate(R.layout.tab_menu_4, container, false);

        Button show_dominikanska = (Button) v.findViewById(R.id.show_galeria_but);
        show_dominikanska.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(dominikanska_point, 15.0f));

            }

        });



        return v;
    }
}