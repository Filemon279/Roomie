package pl.mofinet.myapplication;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.os.AsyncTask;
import android.os.Build;
import android.view.Menu;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.Socket;
import java.net.UnknownHostException;

import static pl.mofinet.myapplication.Start_logo.showMainActiv;

/**
 * Created by filemon on 03.04.16.
 */
public final class Client {
    boolean zainicjowano=false;
    static boolean logined = false;


    public Client(){
        ChatOperator chatOperator = new ChatOperator();
        chatOperator.execute();
    }

    public Socket client;
    public static PrintWriter printwriter;
    private BufferedReader bufferedReader;
    private String CHAT_SERVER_IP = "192.168.88.196"; // Adres kompa w sieci lokalnej // Bledny sprawia ze aplikacja nie uruchomi sie


    private class ChatOperator extends AsyncTask<Void, Void, Void> {

        @Override
        protected Void doInBackground(Void... arg0) {
            try {
                client = new Socket(CHAT_SERVER_IP, 8080); // Creating the server socket.

                if (client != null) {
                    printwriter = new PrintWriter(client.getOutputStream(), true);
                    InputStreamReader inputStreamReader = new InputStreamReader(client.getInputStream());
                    bufferedReader = new BufferedReader(inputStreamReader);



                } else System.exit(1);

            } catch (UnknownHostException e) {
//                e.printStackTrace();
            } catch (IOException e) {
              //  Start_logo.popupInfo("Błąd połączenia z Serwerem");
                e.printStackTrace();
            }
            return null;
        }

        /**
         * Following method is executed at the end of doInBackground method.
         */

        protected void onPostExecute(Void result) {



            Receiver receiver = new Receiver(); // Initialize chat receiver AsyncTask.
            receiver.execute();

        }



    }



    /**
     * This AsyncTask continuously reads the input buffer and show the chat
     * message if a message is availble.
     */
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
               showMainActiv();
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
        }
    }

    /**
     * This AsyncTask sends the chat message through the output stream.
     */
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
        if(!logined) {
            printwriter.println(command);
            printwriter.flush();

        }



    }



}
