package pl.mofinet.myapplication.Funkcje;

import android.app.AlertDialog;
import android.content.Context;
import android.content.Intent;
import android.os.AsyncTask;
import android.util.Log;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.Socket;
import java.net.UnknownHostException;

import pl.mofinet.myapplication.Start.LoginActivity;
import pl.mofinet.myapplication.Start.MainActivity;
import pl.mofinet.myapplication.Start.Start_logo;


/**
 * 
 */
public final class Client {
    boolean zainicjowano=false;
    static boolean logined = false;

    private final Context context;



    public Client(Context context){
        this.context = context;
        ChatOperator chatOperator = new ChatOperator();
        chatOperator.execute();
    }

    public static Socket client;
    public static PrintWriter printwriter;
    private BufferedReader bufferedReader;
    private String CHAT_SERVER_IP = "94.231.229.133"; // Adres kompa w sieci lokalnej // Bledny sprawia ze aplikacja nie uruchamia sie


    private class ChatOperator extends AsyncTask<Void, Void, Void> {
        boolean running=true;
        @Override
        protected Void doInBackground(Void... arg0) {


            try {





                client = new Socket(CHAT_SERVER_IP, 8080); // Creating the server socket.

                if (client != null) {
                    printwriter = new PrintWriter(client.getOutputStream(), true);
                    InputStreamReader inputStreamReader = new InputStreamReader(client.getInputStream());
                    bufferedReader = new BufferedReader(inputStreamReader);
                    running=true;



                } else System.exit(1);

            } catch (UnknownHostException e) {
            running=false;
            } catch (IOException e) {
            running=false;
                e.printStackTrace();
            }
           return null;
        }

        protected void onPostExecute(Void result) {

     if(running) {
         Receiver receiver = new Receiver(); // Initialize chat receiver AsyncTask.
         receiver.execute();
     }
            else Log.i("ROOMIE WARNING","NIE MOZNA NAWIĄZAC POLĄCZENIA");


        }



    }


    private class Receiver extends AsyncTask<Void, Void, Void> {


        private AlertDialog.Builder builder;
        private String message;

        @Override
        protected Void doInBackground(Void... params) {

            while (true) {
                try {
                    if (bufferedReader.ready()) {
                        message = bufferedReader.readLine();
                        publishProgress(null);
                    }
                } catch (UnknownHostException e) {
                    e.printStackTrace();
                } catch (IOException e) {
                    e.printStackTrace();
                }

                try {
                    Thread.sleep(500);
                } catch (InterruptedException ie) {
                }
            }
        }

        @Override
        protected void onProgressUpdate(Void... values) {
    //    if(zainicjowano)    //textViewIn.append("Server: " + message + "\n");



            if(message.equals( "loginConfirmed")) {
                logined = true;
                Start_logo.showMainActiv();
            }
            else if(message.equals("passwordWrong")) {
             //   Start_logo.showLoginActiv();

                LoginActivity.popupInfo("Bledne haslo");
            }
            else if(message.equals("loginWrong")){
              //  Start_logo.showLoginActiv();
                LoginActivity.popupInfo("Bledny numer pokoju");
            }
            else if(message.equals("noAccount")) {
              //  Start_logo.showLoginActiv();

                LoginActivity.popupInfo("Brak podanego Konta");
             }
            else if(message.contains("POW#"))
            {
                //Przykladowy z Servera:" POW#TutajTytul#TrescWiadomosci"
                String[] messageInfo = message.split("#");

                MainActivity.createNotification(messageInfo);
            }
            else if(message.contains("CHECKINOUT#"))
            {
                //Przykladowy z Servera:" CHECKINOUT#dataZameldowania#dataWymeldowania"
             //  String[] messageInfo = message.split("#");
            //  MainActivity.checkIn.setText("CHECK IN: "+messageInfo[1]);
            // MainActivity.checkOut.setText("CHECK OUT: " +messageInfo[2]);
            }

        }
    }

    private class Sender extends AsyncTask<Void, Void, Void>  {

        private String message = " ";
        @Override
        protected Void doInBackground(Void... params) {
            printwriter.write(message + "\n");
            printwriter.flush();

            return null;
        }

        @Override
        protected void onPostExecute(Void result) {

            //   textFieldIn.setText(""); // Clear the chat box
            //    textViewIn.append("Client: " + message + "\n");

        }


    }






//LOGREQ-LoginRequest
    public static void sendRequest(String command) {
      //  if(!logined) {
            printwriter.println(command);
            printwriter.flush();
     //   }



    }



}
