package javaapplication3;

import java.awt.Color;
import java.io.File;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.imageio.ImageIO;
import javax.swing.ImageIcon;


/**
 *
 * @author filemon
 */
public class Hotel_wyslij extends javax.swing.JFrame {

    /**
     * Okno zarządzania powiadomieniami wysyłanymi do aplikacji gościa hotelu.
     */
    public Hotel_wyslij() 
    {
    initComponents();
    setDefaultCloseOperation(this.DISPOSE_ON_CLOSE);
    list_choose_target.setModel(Ramka.List_connected_rooms);
    
    try 
    {
    label_bg.setIcon(new ImageIcon(ImageIO.read(new File("main_bg.jpg"))));
    } 
    catch (IOException ex) 
    {
    Logger.getLogger(Ramka.class.getName()).log(Level.SEVERE, null, ex);
    }
    
   // list_choose_target.setBackground(new Color(0,0,0,125));
   // list_few_targets.setBackground(new Color(0,0,0,125));
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        jScrollPane1 = new javax.swing.JScrollPane();
        list_choose_target = new javax.swing.JList<>();
        jLabel2 = new javax.swing.JLabel();
        check_all_rooms = new javax.swing.JCheckBox();
        check_few_room = new javax.swing.JCheckBox();
        check_one_room = new javax.swing.JCheckBox();
        jScrollPane2 = new javax.swing.JScrollPane();
        list_few_targets = new javax.swing.JList<>();
        jLabel4 = new javax.swing.JLabel();
        button_add_target = new javax.swing.JButton();
        radio_notification = new javax.swing.JRadioButton();
        radio_yesno_notification = new javax.swing.JRadioButton();
        radio_info = new javax.swing.JRadioButton();
        radio_promotion = new javax.swing.JRadioButton();
        field_title = new javax.swing.JTextField();
        jScrollPane3 = new javax.swing.JScrollPane();
        area_message = new javax.swing.JTextArea();
        button_send = new javax.swing.JButton();
        label_bg = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Roomie Server - Wyslij");
        setResizable(false);
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jLabel1.setFont(new java.awt.Font("Ubuntu", 1, 18)); // NOI18N
        jLabel1.setForeground(new java.awt.Color(254, 254, 254));
        jLabel1.setText("Wyślij Wiadomość");
        getContentPane().add(jLabel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(210, 10, -1, -1));

        list_choose_target.setBackground(new java.awt.Color(204, 204, 204));
        jScrollPane1.setViewportView(list_choose_target);

        getContentPane().add(jScrollPane1, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 140, 110, 220));

        jLabel2.setForeground(new java.awt.Color(254, 254, 254));
        jLabel2.setText("Pokoje");
        getContentPane().add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(50, 120, -1, -1));

        check_all_rooms.setForeground(new java.awt.Color(254, 254, 254));
        check_all_rooms.setText("Wszystkie pokoje");
        check_all_rooms.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                check_all_roomsActionPerformed(evt);
            }
        });
        getContentPane().add(check_all_rooms, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 70, -1, -1));

        check_few_room.setForeground(new java.awt.Color(254, 254, 254));
        check_few_room.setText("Kilka pokoi");
        check_few_room.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                check_few_roomActionPerformed(evt);
            }
        });
        getContentPane().add(check_few_room, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 50, -1, -1));

        check_one_room.setForeground(new java.awt.Color(254, 254, 254));
        check_one_room.setText("Jedej pokój");
        check_one_room.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                check_one_roomActionPerformed(evt);
            }
        });
        getContentPane().add(check_one_room, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 30, -1, -1));

        list_few_targets.setBackground(new java.awt.Color(204, 204, 204));
        jScrollPane2.setViewportView(list_few_targets);

        getContentPane().add(jScrollPane2, new org.netbeans.lib.awtextra.AbsoluteConstraints(140, 140, 120, 220));

        jLabel4.setForeground(new java.awt.Color(254, 254, 254));
        jLabel4.setText("Wyslij wiele do:");
        getContentPane().add(jLabel4, new org.netbeans.lib.awtextra.AbsoluteConstraints(140, 120, -1, -1));

        button_add_target.setBackground(new java.awt.Color(55, 129, 149));
        button_add_target.setForeground(new java.awt.Color(254, 254, 254));
        button_add_target.setText("Dodaj");
        button_add_target.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_add_targetActionPerformed(evt);
            }
        });
        getContentPane().add(button_add_target, new org.netbeans.lib.awtextra.AbsoluteConstraints(80, 360, 110, 32));

        radio_notification.setForeground(new java.awt.Color(254, 254, 254));
        radio_notification.setText("Powiadomienie");
        getContentPane().add(radio_notification, new org.netbeans.lib.awtextra.AbsoluteConstraints(270, 120, -1, -1));

        radio_yesno_notification.setForeground(new java.awt.Color(254, 254, 254));
        radio_yesno_notification.setText("Powiadomienie + Tak/Nie");
        getContentPane().add(radio_yesno_notification, new org.netbeans.lib.awtextra.AbsoluteConstraints(270, 150, -1, -1));

        radio_info.setForeground(new java.awt.Color(254, 254, 254));
        radio_info.setText("Informacja");
        getContentPane().add(radio_info, new org.netbeans.lib.awtextra.AbsoluteConstraints(270, 180, -1, -1));

        radio_promotion.setForeground(new java.awt.Color(254, 254, 254));
        radio_promotion.setText("Promocja");
        getContentPane().add(radio_promotion, new org.netbeans.lib.awtextra.AbsoluteConstraints(440, 180, -1, -1));

        field_title.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                field_titleActionPerformed(evt);
            }
        });
        getContentPane().add(field_title, new org.netbeans.lib.awtextra.AbsoluteConstraints(270, 220, 262, -1));

        area_message.setColumns(20);
        area_message.setRows(5);
        jScrollPane3.setViewportView(area_message);

        getContentPane().add(jScrollPane3, new org.netbeans.lib.awtextra.AbsoluteConstraints(270, 250, -1, -1));

        button_send.setBackground(new java.awt.Color(55, 129, 149));
        button_send.setForeground(new java.awt.Color(254, 254, 254));
        button_send.setText("Wyślij");
        button_send.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_sendActionPerformed(evt);
            }
        });
        getContentPane().add(button_send, new org.netbeans.lib.awtextra.AbsoluteConstraints(270, 340, 260, 48));
        getContentPane().add(label_bg, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 540, 400));

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void check_one_roomActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_check_one_roomActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_check_one_roomActionPerformed

    private void check_few_roomActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_check_few_roomActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_check_few_roomActionPerformed

    private void check_all_roomsActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_check_all_roomsActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_check_all_roomsActionPerformed

    private void button_add_targetActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_add_targetActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_button_add_targetActionPerformed

    private void button_sendActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_sendActionPerformed
    int ID;
    
    /**
    *
    * Wysyłanie powiadomień, wypisanie tego w konsoli logów oraz stworzenie odpowiedniego pakietu do wysłania
    * 
    */
    
    if((String)list_choose_target.getSelectedValue()!=null)
        {
            System.out.println(list_choose_target.getSelectedValue());
            ID = Ramka.pokoje[Integer.parseInt(list_choose_target.getSelectedValue())].ID;
            System.out.println(ID);
            PrintWriter   out=null;
                 
            try 
            {
            out = new PrintWriter(new OutputStreamWriter(Ramka.polaczenia[ID].clientSocket.getOutputStream()));
            } 
            catch (IOException ex) 
            {
            Logger.getLogger(Ramka.class.getName()).log(Level.SEVERE, null, ex);
            }

            if(radio_notification.isSelected())
            {
            out.println("POW#"+field_title.getText()+"#"+area_message.getText());
            out.flush();
            Ramka.logs.panel.append("Server to "+list_choose_target.getSelectedValue()+" Powiadomienie : "+area_message.getText()+"\n");
            area_message.setText("");
            }

            else
            {
            out.println(area_message.getText());
            out.flush();
            Ramka.logs.panel.append("Server to "+list_choose_target.getSelectedValue()+": "+area_message.getText()+"\n");
            area_message.setText("");
            }
        }
    }//GEN-LAST:event_button_sendActionPerformed

    private void field_titleActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_field_titleActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_field_titleActionPerformed

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
            java.util.logging.Logger.getLogger(Hotel_wyslij.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Hotel_wyslij.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Hotel_wyslij.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Hotel_wyslij.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Hotel_wyslij().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JTextArea area_message;
    private javax.swing.JButton button_add_target;
    private javax.swing.JButton button_send;
    private javax.swing.JCheckBox check_all_rooms;
    private javax.swing.JCheckBox check_few_room;
    private javax.swing.JCheckBox check_one_room;
    private javax.swing.JTextField field_title;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JScrollPane jScrollPane3;
    private javax.swing.JLabel label_bg;
    private javax.swing.JList<String> list_choose_target;
    private javax.swing.JList<String> list_few_targets;
    private javax.swing.JRadioButton radio_info;
    private javax.swing.JRadioButton radio_notification;
    private javax.swing.JRadioButton radio_promotion;
    private javax.swing.JRadioButton radio_yesno_notification;
    // End of variables declaration//GEN-END:variables
}
