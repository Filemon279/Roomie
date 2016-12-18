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

public class Menu_tab_1 extends Fragment {

    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        final LatLng narodowe_point = Hotel_map.narodowe_point;
        final  LatLng panorama_point = Hotel_map.panorama_point;
        final  LatLng muzeum_point = Hotel_map.muzeum_point;



        Hotel_map.mMap.addMarker(new MarkerOptions().position(muzeum_point).title("Muzeum Główne Wrocław"));
        Hotel_map.mMap.addMarker(new MarkerOptions().position(panorama_point).title("Panorama Raclawicka"));

        View v = inflater.inflate(R.layout.tab_menu_1, container, false);
        Button show_panorama = (Button) v.findViewById(R.id.show_panorama_but);
        Button show_muzeum = (Button) v.findViewById(R.id.show_muzeum_but);


        show_panorama.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(panorama_point, 16.0f));

            }

        });


        show_muzeum.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Hotel_map.mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(muzeum_point, 16.0f));
            }

        });

        return v;



    }


}