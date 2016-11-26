package pl.mofinet.myapplication;

import android.app.AlertDialog;
import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;
import java.util.Calendar;
import android.app.DatePickerDialog;
import android.app.Dialog;
import android.app.TimePickerDialog;
import android.support.v4.app.DialogFragment;
import android.text.format.DateFormat;
import android.view.View;
import android.widget.DatePicker;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.TimePicker;
import android.widget.Toast;

public class Service_clean extends AppCompatActivity {
    private static EditText DateEdit;
    RadioGroup radioGroup;

    Button SEND;
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

        ImageView background = (ImageView) findViewById(R.id.background_clean);
        background.setImageBitmap(ImageLoad.decodeImage(getResources(),R.mipmap.table_bg,getWindowManager().getDefaultDisplay().getWidth(),getWindowManager().getDefaultDisplay().getHeight()));

        radioGroup = (RadioGroup) findViewById(R.id.radiogroup);
        SEND = (Button) findViewById(R.id.buttonSEND);
        SEND.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
             String info="CLEAN#";
            if(DateEdit.length()<4) ImageLoad.popupInfo("Uzupełnij godzinę","Proszę uzupełnić godzinę przed wysłaniem polecenia",builder);
            else{
                 EditText edit = (EditText) findViewById(R.id.editText_uwagi);

                 int selectedId = radioGroup.getCheckedRadioButtonId();
                 RadioButton radioButton = (RadioButton) findViewById(selectedId);
                 info+="Poproszę sprzątanie na "+ radioButton.getText()+" na godzinę: "+DateEdit.getText()+".";
                if(edit.length()>1) info+="\nDodatkowe: "+edit.getText();
                 Client.sendRequest(info);
             }

            }

        });


    }



    public void showTruitonDatePickerDialog(View v) {
        DialogFragment newFragment = new DatePickerFragment();
        newFragment.show(getSupportFragmentManager(), "datePicker");
    }

    public static class DatePickerFragment extends DialogFragment implements
            DatePickerDialog.OnDateSetListener {

        @Override
        public Dialog onCreateDialog(Bundle savedInstanceState) {
            // Use the current date as the default date in the picker
            final Calendar c = Calendar.getInstance();
            int year = c.get(Calendar.YEAR);
            int month = c.get(Calendar.MONTH);
            int day = c.get(Calendar.DAY_OF_MONTH);

            // Create a new instance of DatePickerDialog and return it
            return new DatePickerDialog(getActivity(), this, year, month, day);
        }

        public void onDateSet(DatePicker view, int year, int month, int day) {
            // Do something with the date chosen by the user
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
            // Use the current time as the default values for the picker
            final Calendar c = Calendar.getInstance();
            int hour = c.get(Calendar.HOUR_OF_DAY);
            int minute = c.get(Calendar.MINUTE);

            // Create a new instance of TimePickerDialog and return it
            return new TimePickerDialog(getActivity(), this, hour, minute,
                    DateFormat.is24HourFormat(getActivity()));
        }

        public void onTimeSet(TimePicker view, int hourOfDay, int minute) {
            // Do something with the time chosen by the user
            String hour = String.format("%02d",hourOfDay);
            String min = String.format("%02d",minute);
            DateEdit.setText(hour + ":" + min);
        }
    }
}



