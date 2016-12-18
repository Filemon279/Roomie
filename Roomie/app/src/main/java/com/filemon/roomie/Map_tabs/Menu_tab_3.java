package com.filemon.roomie.Map_tabs;


import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import com.filemon.roomie.R;
import com.google.android.gms.maps.GoogleMap;

public class Menu_tab_3 extends Fragment {

    GoogleMap mMap;
    public Menu_tab_3(GoogleMap map)
    {
        mMap = map;
    }
    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {


        return inflater.inflate(R.layout.tab_menu_3, container, false);
    }
}