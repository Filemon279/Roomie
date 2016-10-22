/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.Serializable;
import java.lang.reflect.InvocationTargetException;
import java.math.BigInteger;
import java.net.ServerSocket;
import java.net.Socket;
import java.security.SecureRandom;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.imageio.ImageIO;
import javax.swing.AbstractAction;
import javax.swing.DefaultListModel;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.SwingUtilities;
import javax.swing.event.ChangeEvent;
import javax.swing.event.ChangeListener;
/**
 *
 * @author filemon
 */
public class Ramka extends javax.swing.JFrame {
static Hotel_logs logs;
        static DefaultListModel List_connected_rooms = new DefaultListModel();
        static DefaultListModel List_connected_id = new DefaultListModel();
        static DefaultListModel List_unconnected_rooms = new DefaultListModel();
        static JFrame RamkaOut;     
        static ClientServiceThread[] polaczenia = new ClientServiceThread[1000];
        static Pokoje[] pokoje = new Pokoje[1000];
        
        
    public Ramka() {
        
        initComponents();   
          RamkaOut = this;
     
    try {
        label_background_img.setIcon(new ImageIcon(ImageIO.read(new File("main_bg.jpg"))));
    } catch (IOException ex) {
        Logger.getLogger(Ramka.class.getName()).log(Level.SEVERE, null, ex);
    }
    request_panel.setBackground(new Color(0,0,0,125));
   
    
           jScrollPane1.getViewport().addChangeListener(new ChangeListener() {

            @Override
            public void stateChanged(ChangeEvent e) {
               jScrollPane1.repaint();
            }
        });
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        startButton = new javax.swing.JButton();
        wyslijButton = new javax.swing.JButton();
        ButtonDodajUsr = new javax.swing.JButton();
        jButton1 = new javax.swing.JButton();
        jScrollPane1 = new javax.swing.JScrollPane();
        request_panel = new javax.swing.JPanel();
        label_background_img = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setBackground(new java.awt.Color(1, 9, 9));
        setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        startButton.setBackground(new java.awt.Color(55, 129, 149));
        startButton.setText("Start");
        startButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                startButtonActionPerformed(evt);
            }
        });
        getContentPane().add(startButton, new org.netbeans.lib.awtextra.AbsoluteConstraints(406, 439, 114, -1));

        wyslijButton.setBackground(new java.awt.Color(55, 129, 149));
        wyslijButton.setText("Wyślij");
        wyslijButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                wyslijButtonActionPerformed(evt);
            }
        });
        getContentPane().add(wyslijButton, new org.netbeans.lib.awtextra.AbsoluteConstraints(12, 439, 184, 65));

        ButtonDodajUsr.setBackground(new java.awt.Color(55, 129, 149));
        ButtonDodajUsr.setText("Dodaj");
        ButtonDodajUsr.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonDodajUsrActionPerformed(evt);
            }
        });
        getContentPane().add(ButtonDodajUsr, new org.netbeans.lib.awtextra.AbsoluteConstraints(751, 439, 184, 65));

        jButton1.setBackground(new java.awt.Color(55, 129, 149));
        jButton1.setText("Logi");
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });
        getContentPane().add(jButton1, new org.netbeans.lib.awtextra.AbsoluteConstraints(405, 472, 115, -1));

        jScrollPane1.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0)));
        jScrollPane1.setHorizontalScrollBarPolicy(javax.swing.ScrollPaneConstants.HORIZONTAL_SCROLLBAR_NEVER);
        jScrollPane1.setToolTipText("");
        jScrollPane1.setAutoscrolls(true);

        request_panel.setBackground(new java.awt.Color(100, 100, 100));
        request_panel.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0), 5));
        request_panel.setAutoscrolls(true);
        request_panel.setName(""); // NOI18N
        request_panel.setLayout(new java.awt.FlowLayout(0));
        jScrollPane1.setViewportView(request_panel);
        request_panel.getAccessibleContext().setAccessibleName("");
        request_panel.getAccessibleContext().setAccessibleParent(this);

        getContentPane().add(jScrollPane1, new org.netbeans.lib.awtextra.AbsoluteConstraints(12, 12, 923, 376));
        getContentPane().add(label_background_img, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 950, 520));

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void startButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_startButtonActionPerformed

     
    new Thread("lecim")
    {
        public void run()
        {
            lecim();
          
        }
    }.start();
        
     startButton.setEnabled(false);
      
    }//GEN-LAST:event_startButtonActionPerformed

    private void wyslijButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_wyslijButtonActionPerformed
Hotel_wyslij wyslij = new Hotel_wyslij();
  wyslij.setLocationRelativeTo(null);
wyslij.show();
  
    }//GEN-LAST:event_wyslijButtonActionPerformed

    private void ButtonDodajUsrActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonDodajUsrActionPerformed
Hotel_dodaj dodaj = new Hotel_dodaj();
dodaj.setLocationRelativeTo(null);

dodaj.show();
   
    }//GEN-LAST:event_ButtonDodajUsrActionPerformed

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
  logs.setLocationRelativeTo(null);
  logs.show();
    }//GEN-LAST:event_jButton1ActionPerformed
int i = 10;
    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Ramka.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Ramka.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Ramka.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Ramka.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Ramka().setVisible(true);
               logs = new Hotel_logs();
               
            }
        });
        
     
        
    }
 
  
    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton ButtonDodajUsr;
    private javax.swing.JButton jButton1;
    private javax.swing.JScrollPane jScrollPane1;
    public static javax.swing.JLabel label_background_img;
    private javax.swing.JPanel request_panel;
    private javax.swing.JButton startButton;
    private javax.swing.JButton wyslijButton;
    // End of variables declaration//GEN-END:variables

    public void lecim(){
       
         try {
                 
            ServerSocket m_ServerSocket = new ServerSocket(8080);
            int id = 0;
           
 while(true){
   
                Socket clientSocket = m_ServerSocket.accept();
                ClientServiceThread cliThread = new ClientServiceThread(clientSocket, id, logs.panel,jScrollPane1,request_panel);
            
            polaczenia[id] = cliThread;
                cliThread.start();
                  id++;
 }
              } catch (IOException ex) {
            Logger.getLogger(Ramka.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

public void updatePanel(final String text, JTextArea panelIn)
{
        try {
            SwingUtilities.invokeAndWait(new Runnable()
            {
                public void run()
                {
                    panelIn.setText(panelIn.getText()+text);
                }
            });  } catch (InterruptedException ex) {
            Logger.getLogger(Ramka.class.getName()).log(Level.SEVERE, null, ex);
        } catch (InvocationTargetException ex) {
            Logger.getLogger(Ramka.class.getName()).log(Level.SEVERE, null, ex);
        }
}


public void addToList(final String text)
{
        try {
            SwingUtilities.invokeAndWait(new Runnable()
            {
                public void run()
                {     
             //  UserInList.addElement(text);
                }
            });  } catch (InterruptedException ex) {
            Logger.getLogger(Ramka.class.getName()).log(Level.SEVERE, null, ex);
        } catch (InvocationTargetException ex) {
            Logger.getLogger(Ramka.class.getName()).log(Level.SEVERE, null, ex);
        }
}  

public void addButton(String title,String information)
{
    Dimension size = new Dimension(120,120);
 Dimension size2 = new Dimension(this.getWidth(),this.getHeight());
   i++;
    final JButton newButton = new JButton(title);
      newButton.setAction( new AbstractAction(title) {
        @Override
        public void actionPerformed( ActionEvent e ) {  
          Ramka.logs.panel.append(e.getActionCommand()+"\n");
          Hotel_request_info info = new Hotel_request_info();
          info.area_request_info.setText(information);
          info.label_request_info.setText(title);
          info.close_button.setAction(new AbstractAction("Wykonano") {
            @Override
            public void actionPerformed(ActionEvent e) {
                request_panel.remove(newButton);
               request_panel.revalidate();
                request_panel.repaint();
                info.dispose();
            }
        });
          
          info.setLocationRelativeTo(null);
          info.show();
          
        }
    });
    // newButton.setText("<html><center><b>"+room+"</b><br>"+title+"</center></html>");
   
     newButton.setPreferredSize(size);
     
     
    
     request_panel.setPreferredSize(size2);
     request_panel.add(newButton);   
     request_panel.validate();     
     jScrollPane1.validate();
}




}


class Pokoje{
    int numer;
    String haslo;
    int ID=-1;
public Pokoje(int numer1, String haslo1)
{
    numer = numer1;
    haslo = haslo1;
}
}





class ClientServiceThread extends Thread {
    
    Ramka ramka= new Ramka();
    Socket clientSocket;
    int clientID = -1,clientRoom=1001;
    boolean running = true,looged=false;
    static JTextArea panel;
   JScrollPane jScrollPane1;
   JPanel request_panel;
    DefaultListModel ListaUsrIn,ListaZalogowaniIn,ListaPolaczeniIn;
    String clientCommand;
    String pass;
    String[] messageInfo;
    int nr;
    Pokoje[] pokoje;
  ClientServiceThread(Socket s, int i, JTextArea panelIn,JScrollPane jScrollPane12,
        JPanel request_panel1) {
    clientSocket = s;
    clientID = i;
    jScrollPane1=jScrollPane12;
  request_panel= request_panel1;
  
    panel = panelIn;
    ListaUsrIn = Ramka.List_unconnected_rooms;
    pokoje = Ramka.pokoje;
    ListaZalogowaniIn = Ramka.List_connected_rooms;
 
    ListaPolaczeniIn = Ramka.List_connected_id;
  }

  
  
  
  public void run() {
panel.append("Accepted Client : ID - " + clientID + " : Address - "
        + clientSocket.getInetAddress().getHostName()+"\n");
    ListaPolaczeniIn.addElement("ID: "+clientID);
    try {
      BufferedReader   in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
      PrintWriter   out = new PrintWriter(new OutputStreamWriter(clientSocket.getOutputStream()));
      while (running) {
        
        if((clientCommand = in.readLine())!=null){
         messageInfo = clientCommand.split("#");
         panel.append(clientCommand+"\n");
        
        if (messageInfo[0].equalsIgnoreCase("quit")) {
          running = false;
          panel.setText(panel.getText()+"Zakończył połączenie : " + clientID+"\n");
        } 
        if (messageInfo[0].equalsIgnoreCase("LOGREQ")) {
          panel.setText(panel.getText()+"Prośba o zalogowanie od : " + clientID+"\n");
          nr = Integer.parseInt(messageInfo[1]);
          panel.setText(panel.getText()+"Z Numerem : " + nr+"\n");
          pass = messageInfo[2];
          panel.setText(panel.getText()+"z Haslem : " + pass+"\n");
          if(ListaUsrIn.size()==0) wyslijWiadomosc(out,"noAccount");

          for(int i = 0;i<ListaUsrIn.size();i++) 
          {
              if (pokoje[Integer.parseInt(ListaUsrIn.get(i).toString())].numer==nr)
              {
                  if(pokoje[Integer.parseInt(ListaUsrIn.get(i).toString())].haslo.equals(pass))
                  {
                      wyslijWiadomosc(out,"loginConfirmed");
                      ListaZalogowaniIn.addElement(""+nr);
                      pokoje[nr].ID = clientID;
                      clientRoom = nr;
                      //ListaPolaczeniIn.removeElement("ID: "+clientID);
                      panel.append("Zalogowano pomyslnie jako: "+nr+"\n");
                      looged=true;         
                      break;
                  }
                   panel.append("Bledne haslo\n");
                   wyslijWiadomosc(out,"passwordWrong");
          
                    break;
                
              }   
     if((i+1)>=ListaUsrIn.size()&&(pokoje[Integer.parseInt(ListaUsrIn.get(i).toString())].numer!=nr)){
          panel.append("Bledny numer\n");
                   wyslijWiadomosc(out,"loginWrong");
     }
          }
        
        }
        
      if(looged){
            //Sprzatanie : CLEAN#HOUR#DAY#OTHERS
          if (messageInfo[0].equalsIgnoreCase("CLEAN")) {
              panel.append("SPRZATANKO\n");
          addButton(clientRoom,"SPRZATANIE","Prosba o sprzatanie pokoju z podanymi informacjami:\nGodzina: \t"
                  +messageInfo[1]+"\nDzień: \t"+messageInfo[2]+"\nInne: \t"+messageInfo[3]);
                    } 
        
        
        
        }
 
        
      }
        
     else  {
       if(ListaZalogowaniIn.size()!=0)ListaZalogowaniIn.removeElement(""+clientRoom);  
       panel.setText(panel.getText()+"ID: "+clientID+" Zakończył połączenie\n");
       running = false;       
        }
      }
 
    } catch (Exception e) {
      e.printStackTrace();
    }
   
  }
  
 public void wyslijWiadomosc(PrintWriter printWriter, String text)
    {
        printWriter.println(text);
        printWriter.flush();
    }
  

 public void addButton(int room,String title,String information)
{
    Dimension size = new Dimension(120,120);
 Dimension size2 = new Dimension(Ramka.RamkaOut.getWidth(),Ramka.RamkaOut.getHeight());

    final JButton newButton = new JButton(title);
      newButton.setAction( new AbstractAction(title) {
        @Override
        public void actionPerformed( ActionEvent e ) {  
          Ramka.logs.panel.append(e.getActionCommand()+"\n");
          Hotel_request_info info = new Hotel_request_info();
          info.area_request_info.setText(information);
          info.label_request_info.setText(title);
          info.close_button.setAction(new AbstractAction("Wykonano") {
            @Override
            public void actionPerformed(ActionEvent e) {
                request_panel.remove(newButton);
               request_panel.revalidate();
                request_panel.repaint();
                jScrollPane1.repaint();
                info.dispose();
            }
        });
       
          info.setLocationRelativeTo(null);
          info.show();
          
        }
    });
      
        
     newButton.setBackground(new Color(0,170,204)) ;        
     newButton.setText("<html><center><b>"+room+"<br></b>"+title+"</center></html>");
 
    
   
     newButton.setPreferredSize(size);
 
     
     
     request_panel.setPreferredSize(size2);
     request_panel.add(newButton);   
     request_panel.validate();     
     jScrollPane1.validate();
}
 
 
 
 public static void addToLog(String text)
 {
    // panel.append(text);
 }
}