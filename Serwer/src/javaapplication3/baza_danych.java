/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

import com.mysql.jdbc.jdbc2.optional.MysqlDataSource;

import java.sql.ResultSet;
import java.sql.SQLException;


/**
 *
 * @author Filemon
 */


public class baza_danych {
public static String [] Kolumny;
public static ResultSet rs;
public static java.sql.Statement stmt;
 public baza_danych() throws SQLException
 {
      MysqlDataSource dataSource = new MysqlDataSource();
    dataSource.setUser("root");
    dataSource.setPassword("root");
    dataSource.setDatabaseName("roomie");
    dataSource.setServerName("127.0.0.1");
        
java.sql.Connection conn = dataSource.getConnection();
stmt = conn.createStatement();
rs = stmt.executeQuery("SELECT * FROM pokoje");
java.sql.ResultSetMetaData metadata = rs.getMetaData();
int columnCount = metadata.getColumnCount(); 

 /* while (rs.next()) {
       for (int i = 1; i <= columnCount; i++) {
           if (i > 1) System.out.println(",  ");
           String columnValue = rs.getString(i);
           System.out.print(metadata.getColumnName(i)+ " : " + columnValue);
       }
  }*/
//Zapisujemy nazwy kolumn z bazy danych;
Kolumny = new String[columnCount];  
for (int i = 1; i <= columnCount; i++) Kolumny[i-1]=metadata.getColumnName(i);
//for(int i = 0; i<Kolumny.length;i++) System.out.println(Kolumny[i]); //<-Wypisujemy dla sprawdzenia - Dziala 11/7/2016

 }
 
 public static ResultSet getAllRooms()
 {
     return rs;
 }
 
}
