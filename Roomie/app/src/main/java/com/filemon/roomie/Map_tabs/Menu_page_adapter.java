package com.filemon.roomie.Map_tabs;

import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentManager;
import android.support.v4.app.FragmentStatePagerAdapter;

import com.google.android.gms.maps.GoogleMap;

public class Menu_page_adapter extends FragmentStatePagerAdapter {
    int mNumOfTabs;
    GoogleMap mMap;
    public Menu_page_adapter(FragmentManager fm, int NumOfTabs, GoogleMap map) {
        super(fm);
        this.mNumOfTabs = NumOfTabs;
        mMap = map;
    }

    @Override
    public Fragment getItem(int position) {

        switch (position) {

            case 0:
                Menu_tab_1 tab1 = new Menu_tab_1(mMap);
                return tab1;
            case 1:
                Menu_tab_2 tab2 = new Menu_tab_2(mMap);
                return tab2;
            case 2:
                Menu_tab_3 tab3 = new Menu_tab_3(mMap);
                return tab3;
            case 3:
                Menu_tab_4 tab4 = new Menu_tab_4(mMap);
                return tab4;
            case 4:
                Menu_tab_5 tab5 = new Menu_tab_5(mMap);
                return tab5;
            default:
                return null;
        }
    }

    @Override
    public int getCount() {
        return mNumOfTabs;
    }
}