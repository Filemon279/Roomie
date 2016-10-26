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

public class Menu_tab_2 extends Fragment {

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        final LatLng uwr_point = Hotel_map.uwr_point;
        final  LatLng ostrow_point = Hotel_map.ostrów_point;
        final  LatLng rynek_point = Hotel_map.rynek_point;
        final IMapController mapController;
        mapController = Hotel_map.mapController;

     //   Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(ostrow_point, 16.0f));
        View v = inflater.inflate(R.layout.tab_menu_2, container, false);
        Hotel_map.mMap.addMarker(new MarkerOptions().position(ostrow_point).title("Ostrów Tumski"));
        Hotel_map.mMap.addMarker(new MarkerOptions().position(uwr_point).title("Uniwersytet Wrocławski"));
        Hotel_map.mMap.addMarker(new MarkerOptions().position(rynek_point).title("Rynek Wrocławski"));


        Button show_rynek = (Button) v.findViewById(R.id.show_rynek_but);
        Button show_ostrow = (Button) v.findViewById(R.id.show_ostrow_but);
        Button  show_uwr = (Button) v.findViewById(R.id.show_uwr_but);


        show_ostrow.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {

                Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(ostrow_point, 15.0f));
            }

        });
        show_uwr.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {

                Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(uwr_point, 15.0f));

            }

        });

        show_rynek.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(rynek_point, 15.0f));
            }

        });

        return v;
    }
}