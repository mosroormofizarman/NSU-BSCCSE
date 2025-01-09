package gui;

import java.util.*;
import javax.swing.*;
import java.awt.*;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/*import java.io.BufferReader;
import java.io.File;
import java.io.Filereader;*/

public class LoginFrame extends JFrame{
	
	Container container = getContentPane();
	
	//Application Label
	JLabel appLabel = new JLabel("Gym Management");
	JLabel designLabel = new JLabel(".....................OR.....................");
	
	//TextField
	JTextField userTextField = new JTextField();
	JPasswordField passwordField = new JPasswordField();
	
	//Checkbox
	JCheckBox showPassword = new JCheckBox("Show Password");
	
	//Button
	JButton loginButton = new JButton("Login");
	JButton signup = new JButton("Create a new account");
	
	
	public LoginFrame() {
		
		//Window banano
		this.setTitle("Gym Management");
		this.setBounds(500,100,400,600);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setResizable(false);
		
		//SetIcon
		this.setIconImage(Toolkit.getDefaultToolkit().getImage("C:\\Users\\ArMan\\Desktop\\eclipse-workspace\\GUI2\\src\\gui\\Icon Image\\logo.jpg"));
		
		Initialize();
	}
	
	public void Initialize() {
		//Container
		container.setLayout(null);
		container.setBackground(new Color(173, 216, 230));
		
		//Label
		appLabel.setBounds(92,82,192,56);
		appLabel.setForeground(new Color(0,0,0));
		appLabel.setFont(new Font("San Francisco", Font.BOLD, 16));
		appLabel.setHorizontalAlignment(SwingConstants.CENTER);
		designLabel.setHorizontalTextPosition(SwingConstants.CENTER);
		container.add(appLabel);
		
		//Label2
		designLabel.setFont(new Font("San Francisco", Font.BOLD, 16));
		designLabel.setBounds(15,455,364,29);
		designLabel.setForeground(new Color(0,0,0));
		designLabel.setHorizontalAlignment(SwingConstants.CENTER);
		designLabel.setHorizontalTextPosition(SwingConstants.CENTER);
		container.add(designLabel);
		
		//Text Fields
		userTextField.setBounds(42,185,312,37);
		userTextField.setToolTipText("Enter Username");
		userTextField.setFont(new Font("San Francisco", Font.PLAIN, 16));
		container.add(userTextField);
		
		//password Fields
		passwordField.setToolTipText("Enter Username");
		passwordField.setFont(new Font("San Francisco", Font.PLAIN, 16));
		passwordField.setBounds(40,258,314,37);
		container.add(passwordField);
		
		//Check Boxes
		showPassword.setBounds(360,267,20,20);
		showPassword.setBackground(new Color(173, 216, 230));
		showPassword.setToolTipText("Show Password");
		container.add(showPassword);
		
		//Buttons
		
		loginButton.setBounds(145,354,97,26);
		loginButton.setForeground(new Color(0,0,0));
		loginButton.setHorizontalTextPosition(SwingConstants.CENTER);
		loginButton.setVerticalTextPosition(SwingConstants.CENTER);
		loginButton.setBackground(new Color(255,255,255));
		loginButton.setFont(new Font("San Francisco", Font.BOLD, 16));
		container.add(loginButton);
		
		signup.setBounds(135,493,115,29);
		signup.setForeground(new Color(0,0,0));
		signup.setBackground(new Color(255,255,255));
		signup.setFont(new Font("San Francisco", Font.BOLD, 16));
		container.add(signup);
		
	}

}
