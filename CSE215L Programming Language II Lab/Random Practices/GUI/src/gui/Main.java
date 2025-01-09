package gui;

import java.awt.Color;

import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;


public class Main {
	public static void main(String[] args) {
		
		ImageIcon image2 = new ImageIcon("logo.jpg");//window te picture dewa
		
		
		
		JLabel label = new JLabel();
		label.setText("Welcome to Gym Management");//window te text add kora
		label.setIcon(image2);//picture add kora
		label.setHorizontalTextPosition(JLabel.CENTER);
		label.setVerticalTextPosition(JLabel.TOP);
		label.setForeground(new Color(0x00FF00));
		
		
		JFrame frame = new JFrame(); //aita akta GUI window component add korar jonno
		frame.setSize(500,500); //window size control korar jonno
		frame.setTitle("Gym Management System"); //title dear jonno
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE );// window close korar jonno
		frame.setResizable(false);// Resize kora bondho korar jonno
		frame.setVisible(true); //Window ta dekhar jonno
		frame.add(label);
		
		ImageIcon image = new ImageIcon("logo.jpg");///logo set korar jonno
		frame.setIconImage(image.getImage());//image set korar jonno
		//frame.getContentPane().setBackground(Color.yellow);//default color
		frame.getContentPane().setBackground(new Color(173, 216, 230));//custom color
		//frame.getContentPane().setBackground(new Color(123,50,250));//custom color
		
		
	}
}
