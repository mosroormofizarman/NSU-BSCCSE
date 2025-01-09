package demoFile;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Formatter;
import java.util.Scanner;

public class File01 {
	public static void main(String[] args) {
		File dir01 = new File("person");
		dir01.mkdir();
		
		File dir02 = new File("C:\\Users\\ArMan\\Desktop\\eclipse-workspace\\CSE215_Lab_Quiz04\\src\\demoFile\\01");
		dir02.mkdir();
		
		String p1 = dir01.getAbsolutePath();
		String p2 = dir02.getAbsolutePath();
		
		System.out.println(p1);
		System.out.println(p2);
		
		System.out.println(dir01.getName());
		System.out.println(dir02.getName());
		
		if(dir02.delete()) {
			System.out.println("Folder has been deleted");
		}
		else {
			System.out.println("Folder has not been deleted");
		}
		
//		File f1 = new File("student.txt");
//		File f2 = new File("teacher.txt");
//		
//		try {
//			f1.createNewFile();
//			f2.createNewFile();
//			System.out.println("File are created");
//			
//		}catch(Exception e) {
//			System.out.println(e);
//		}
		
		File f3 = new File("C:\\Users\\ArMan\\Desktop\\eclipse-workspace\\CSE215_Lab_Quiz04\\person\\student.txt");
		
		try {
			f3.createNewFile();
			System.out.println("File are created");
			
		}catch(Exception e) {
			System.out.println(e);
		}
		
		File f4 = new File(p1 + "\\teacher.txt");
		
		try {
			f4.createNewFile();
			System.out.println("File are created");
			
		}catch(Exception e) {
			System.out.println(e);
		}
		
		f3.delete();
		
		if(f3.exists()) {
			System.out.println("File exists");
		}
		else {
			System.out.println("File not exists");
		}
		
		try {
			Formatter form01 = new Formatter(f4);
			form01.format("%s %s\r\n", "101", "Arman");
			
			form01.close();
			
		}catch(FileNotFoundException e) {
			System.out.println(e);
		}
		
		try {
			Formatter form01 = new Formatter(f4);
			Scanner input = new Scanner(System.in);
			
			for(int i = 1; i<=2; i++) {
				String id = input.next();
				String name = input.next();
				form01.format("%s %s\r\n", id, name);
			}
			
			form01.close();
			
		}catch(FileNotFoundException e) {
			System.out.println(e);
		}
		
		
		
		
	}
}
