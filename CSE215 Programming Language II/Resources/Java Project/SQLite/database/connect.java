
package database;

import javax.swing.JOptionPane;
import java.sql.Connection;
import java.sql.DriverManager;

public class connect {
    Connection conn;
    public static Connection ConnectDb(){
        try{
            Class.forName("org.sqlite.JDBC");
            String url = "jdbc:sqlite:src/resources/userdata.db";
            Connection conn=DriverManager.getConnection(url);
            return conn;
            
        } catch(Exception e){
            JOptionPane.showMessageDialog(null, e);
            return null;
    }
    
    }
    
}
