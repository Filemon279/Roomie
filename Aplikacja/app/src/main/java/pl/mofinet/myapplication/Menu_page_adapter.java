package pl.mofinet.myapplication;

import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentManager;
import android.support.v4.app.FragmentStatePagerAdapter;

public class Menu_page_adapter extends FragmentStatePagerAdapter {
    int mNumOfTabs;

    public Menu_page_adapter(FragmentManager fm, int NumOfTabs) {
        super(fm);
        this.mNumOfTabs = NumOfTabs;
    }

    @Override
    public Fragment getItem(int position) {

        switch (position) {

            case 0:
                Menu_tab_1 tab1 = new Menu_tab_1();
                return tab1;

            case 1:
                Menu_tab_2 tab2 = new Menu_tab_2();
                return tab2;
            case 2:
                Menu_tab_3 tab3 = new Menu_tab_3();
                return tab3;
            case 3:
                Menu_tab_4 tab4 = new Menu_tab_4();
                return tab4;
            case 4:
                Menu_tab_5 tab5 = new Menu_tab_5();
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