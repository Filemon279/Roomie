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

public class Menu_tab_5 extends Fragment {

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {

        final  LatLng inf_uwr_point = Hotel_map.inf_uwr_point;
        final LatLng zoo_point = Hotel_map.zoo_point;
        final IMapController mapController;
        mapController = Hotel_map.mapController;
    //    Hotel_map.mMap.clear();
     //   Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(inf_uwr_point, 16.0f));
        View v = inflater.inflate(R.layout.tab_menu_5, container, false);
        Hotel_map.mMap.addMarker(new MarkerOptions().position(inf_uwr_point).title("Marker in Sydney"));
        Hotel_map.mMap.addMarker(new MarkerOptions().position(zoo_point).title("Marker in Sydney"));

        Button show_inf_uwr = (Button) v.findViewById(R.id.show_uwr_inf_but);
        Button show_zoo = (Button) v.findViewById(R.id.show_zoo_but);

        show_inf_uwr.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(inf_uwr_point, 16.0f));
            }

        });


        show_zoo.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(zoo_point, 16.0f));
            }

        });

        return v;



    }
}