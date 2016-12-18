package com.filemon.roomie.Services;

import android.app.AlertDialog;
import android.app.DatePickerDialog;
import android.app.Dialog;
import android.app.TimePickerDialog;
import android.os.Bundle;
import android.support.v4.app.DialogFragment;
import android.support.v7.app.AppCompatActivity;
import android.text.format.DateFormat;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.DatePicker;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.TimePicker;

import com.filemon.roomie.R;
import com.filemon.roomie.WebSocket_Client;

import java.util.Calendar;

import xdroid.toaster.Toaster;


public class Service_clean extends AppCompatActivity {


    public static EditText DateEdit;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
        WindowManager.LayoutParams.FLAG_FULLSCREEN);

        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_service_clean);

        DateEdit = (EditText) findViewById(R.id.edit_godzina);
        DateEdit.setFocusable(false);
        DateEdit.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                showTruitonTimePickerDialog(v);
            }
        });
        final AlertDialog.Builder builder = new AlertDialog.Builder(this);

        final RadioGroup radioGroup = (RadioGroup) findViewById(R.id.radiogroup);
        int radioButtonID = radioGroup.getCheckedRadioButtonId();
        View radioButton = radioGroup.findViewById(radioButtonID);
        int idx = radioGroup.indexOfChild(radioButton);
        RadioButton r = (RadioButton)  radioGroup.getChildAt(idx);
        final String selectedtext = r.getText().toString();

        Button SEND = (Button) findViewById(R.id.buttonSEND);
        SEND.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                String info="CLEAN#";
                if(DateEdit.getText().length()<3) Toaster.toast("Wprowadź godzinę");
                else{
                    info+=DateEdit.getText()+"#";
                    info+=selectedtext;
                    WebSocket_Client.client_socket.send(info);
                }
            }

        });


    }



    public void showTruitonDatePickerDialog(View v) {
        DialogFragment newFragment = new DatePickerFragment();
        newFragment.show(getSupportFragmentManager(), "datePicker");
    }

    public class DatePickerFragment extends DialogFragment implements
            DatePickerDialog.OnDateSetListener {


        @Override
        public Dialog onCreateDialog(Bundle savedInstanceState) {

            final Calendar c = Calendar.getInstance();
            int year = c.get(Calendar.YEAR);
            int month = c.get(Calendar.MONTH);
            int day = c.get(Calendar.DAY_OF_MONTH);

            return new DatePickerDialog(getActivity(), this, year, month, day);
        }

        public void onDateSet(DatePicker view, int year, int month, int day) {
            DateEdit.setText(day + "/" + (month + 1) + "/" + year);
        }
    }

    public void showTruitonTimePickerDialog(View v) {
        DialogFragment newFragment = new TimePickerFragment();
        newFragment.show(getSupportFragmentManager(), "timePicker");
    }

    public static class TimePickerFragment extends DialogFragment implements
            TimePickerDialog.OnTimeSetListener {

        @Override
        public Dialog onCreateDialog(Bundle savedInstanceState) {
            final Calendar c = Calendar.getInstance();
            int hour = c.get(Calendar.HOUR_OF_DAY);
            int minute = c.get(Calendar.MINUTE);
            return new TimePickerDialog(getActivity(), this, hour, minute,
            DateFormat.is24HourFormat(getActivity()));
        }

        public void onTimeSet(TimePicker view, int hourOfDay, int minute) {
            String hour = String.format("%02d",hourOfDay);
            String min = String.format("%02d",minute);
            DateEdit.setText(hour + ":" + min);
        }
    }
}



