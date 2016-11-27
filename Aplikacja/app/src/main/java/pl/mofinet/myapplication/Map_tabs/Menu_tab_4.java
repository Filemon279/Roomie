package pl.mofinet.myapplication.Map_tabs;


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

import pl.mofinet.myapplication.MainMenu.Hotel_map;
import pl.mofinet.myapplication.R;

public class Menu_tab_4 extends Fragment {

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {

        final LatLng dominikanska_point = Hotel_map.dominikanska_point;

        final  LatLng narodowe_point = Hotel_map.narodowe_point;
        final  LatLng renoma_point = Hotel_map.renoma_point;
        final  LatLng arkady_point = Hotel_map.arkady_point;
        final  LatLng skyTower_point = Hotel_map.skyTower_point;
        final  LatLng magnolia_point = Hotel_map.magnolia_point;
        final IMapController mapController;
        mapController = Hotel_map.mapController;


      //  Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(dominikanska_point, 15.0f));
        Hotel_map.mMap.addMarker(new MarkerOptions().position(dominikanska_point).title("Galeria Dominiksnska"));
        Hotel_map.mMap.addMarker(new MarkerOptions().position(renoma_point).title("Renoma"));
        Hotel_map.mMap.addMarker(new MarkerOptions().position(arkady_point).title("Arkady"));
        Hotel_map.mMap.addMarker(new MarkerOptions().position(skyTower_point).title("SkyTower"));
        Hotel_map.mMap.addMarker(new MarkerOptions().position(magnolia_point).title("Magnolia Park"));


        View v = inflater.inflate(R.layout.tab_menu_4, container, false);

        Button show_dominikanska = (Button) v.findViewById(R.id.show_galeria_but);
        show_dominikanska.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(dominikanska_point, 15.0f));
            }

        });

        Button show_renoma = (Button) v.findViewById(R.id.show_renoma_but);
        show_renoma.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(renoma_point, 15.0f));
            }

        });

        Button show_arkady = (Button) v.findViewById(R.id.show_arkady_but);
        show_arkady.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(arkady_point, 15.0f));
            }

        });

        Button show_skyTower = (Button) v.findViewById(R.id.show_skyTower_but);
        show_skyTower.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(skyTower_point, 15.0f));
            }

        });

        Button show_magnolia = (Button) v.findViewById(R.id.show_magnolia_but);
        show_magnolia.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(magnolia_point, 15.0f));
            }

        });



        return v;
    }
}