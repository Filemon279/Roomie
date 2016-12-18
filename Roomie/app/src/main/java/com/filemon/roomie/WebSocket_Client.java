package com.filemon.roomie;

import android.app.Activity;
import android.content.Intent;
import android.util.Log;
import org.java_websocket.WebSocket;
import org.java_websocket.drafts.Draft_10;
import org.java_websocket.handshake.ServerHandshake;
import org.java_websocket.client.WebSocketClient;
import java.net.URI;
import java.net.URISyntaxException;


import xdroid.toaster.Toaster;


public class WebSocket_Client {
    static public WebSocketClient client_socket; //STATYCZNE I PUBLICZNE, NIE CHCEMY TEGO KASOWAC
    static public int WsConnectionStatus=0; //0-nie inicjonowano//1-polaczono//2-niepolaczono

    private static Activity activity;
    static boolean running=false;
    static boolean errorWindow=false;
    static Intent error;
    static boolean logged = false,dane=false;
    static String checkIn="";
    static String checkOut="";
    static String Imie="";
    static String Nazwisko="";
    static String Number="";
    static Boolean Notification=false;
    static String NotificationText="#";

    public static void run_webSocket() throws URISyntaxException, InterruptedException {

        if(!running) {
            try {
                logged = false;
                running = true;
                client_socket = new WebSocketClient(new URI("ws://91.185.191.213:8279"), new Draft_10()) {

                    @Override
                    public void onMessage(String message) {
                        Log.i("MESSAGE1",message);
                        if(message.equals("#USER#") || message.equals("#ADMIN#"))
                        {
                            logged = true;
                        }
                        else if(message.equals("#LOGIN_ERROR")) Toaster.toast("Nieprawidłowe dane logowania");
                        if(logged) {

                            String[] messageInfo = message.split("#");

                            if(messageInfo[0].equals("USER_DATA"))
                            {
                                dane=true;
                                Number=messageInfo[1];
                                Imie=messageInfo[2];
                                Nazwisko=messageInfo[3];
                                checkIn=messageInfo[4];
                                checkOut=messageInfo[5];
                            }
                            else if(messageInfo[0].equals("MSG"))
                            {
                                NotificationText="Hotel ISSP#"+messageInfo[1];
                                Notification=true;
                            }
                        }
                    }

                    @Override
                    public void onOpen(ServerHandshake handshake) {
                        Log.i("WEBSOCKETS", "Połączenie otwarte");
                        Toaster.toast("Połączono pomyślnie");
                        WsConnectionStatus = 1;
                    }

                    @Override
                    public void onClose(int code, String reason, boolean remote) {
                        Log.i("WEBSOCKETS", "Połączenie przerwane");
                        Toaster.toast("Połączenie z serwerem zostało przerwane");
                        WsConnectionStatus = 0;
                        showErrorActiv("Połączenie z serwerem zostało przerwane");
                        this.close();
                        logged = false;
                    }

                    @Override
                    public void onError(Exception ex) {
                        ex.printStackTrace();
                    }
                };
            } catch (URISyntaxException e) {
                e.printStackTrace();
            }
            client_socket.connect();
            running=false;
        }
    }

    public static void setActiv(Activity ctx)
    {
        activity = ctx;
    }

    private static void showErrorActiv(final String msg) {
        if (!errorWindow) {
            errorWindow=true;
            activity.runOnUiThread(new Runnable() {
                public void run() {
                    if (client_socket.getReadyState() != WebSocket.READYSTATE.OPEN) {
                        error = new Intent(activity, Roomie_Error.class);
                        error.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
                        error.addFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
                        error.putExtra("Info", msg);
                        activity.startActivity(error);
                    }
                }
            });
        }
    }

}

