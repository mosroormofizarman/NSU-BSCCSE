package MosroorMofizArman1921079642;

import java.util.Scanner;
import java.util.Calendar;

class MyDate implements Comparable<MyDate>, Cloneable{
	public static int monthDay [] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	private int day; 
	private int month;
	private int year;
	
	public MyDate() {

	}
	public MyDate(String st) {
		String[] dt = st.split("-"); 
		day = Integer.parseInt(dt[0]); 
		month = Integer.parseInt(dt[1]);
		year = Integer.parseInt(dt[2]);

	}
	public int getDay() {
		return day;
	}
	public void setDay(int day) {
		this.day = day;
	}
	public int getMonth() {
		return month;
	}
	public void setMonth(int month) {
		this.month = month;
	}
	public int getYear() {
		return year;
	}
	public void setYear(int year) {
		this.year = year;
	}
	public MyDate(Calendar dt) {
		day = dt.get(Calendar.DAY_OF_MONTH); 
		month = dt.get(Calendar.MONTH);
		year = dt.get(Calendar.YEAR); 
	}
	 public boolean setDate(int d, int m , int y) {
		day = d; 
		month = m;
		year = y; 
		if(d >= 01 && m >= 01 && y >= 0000 && d <= 31 && m <= 12 && y <= 9999) {
			return true;
		}
		
		return false; 
	}
	 public MyDate getDate() { 
		 return this;
	}
	 
	public int countLeapYears(MyDate d) {
		int noryear = d.year;
		
		if(d.month<=2) {
			noryear--;
		}
		return noryear/4 - noryear/100 + noryear/400;
	}
	
	public int difference(MyDate d) {
		MyDate x = this;
		MyDate y = d;
		
		int n1 = x.getYear()*365 + x.getDay();
		
		for(int i=0; i<x.getMonth()-1; i++) {
			n1 += monthDay[i];
		}
		
		n1 += countLeapYears(x);
		
		int n2 = y.getYear()*365 + y.getDay();
		
		for(int i=0; i<y.getMonth()-1; i++) {
			n2 += monthDay[i];
		}
		
		n2 += countLeapYears(y);
		
		int res = n2-n1;
		
		return res;
	}
	 
	 public int compareTo(MyDate d) {
		 int comvalue = difference(d);
		 
		 if(comvalue > 0) {
			 return 1;
		 }
		 if(comvalue < 0) {
			 return -1;
		 }
		return 0;
	}
	public MyDate clone() { 
		MyDate temp = new MyDate(); 
		temp.setDate(day, month, year); 
		return temp; 
	}
	public String toString() {
		 return day + "-" + month + "-" + year;
	}
}

public class Assignment02 {
	public static void main(String[] args) { 
		Scanner input = new Scanner(System.in);
		System.out.println("Enter Date1: ");
		System.out.println("Day:");
		int day1 = input.nextInt();
		System.out.println("Month:");
		int month1 = input.nextInt();
		System.out.println("Year:");
		int year1 = input.nextInt();
		MyDate x = new MyDate();
		x.setDate(day1, month1, year1);
		
		System.out.println("\nDate2 will be the current date.");
		MyDate y = new MyDate(Calendar.getInstance());
		
		System.out.println("\nEnter Date3: ");
		System.out.println("Day:");
		int day3 = input.nextInt();
		System.out.println("Month:");
		int month3 = input.nextInt();
		System.out.println("Year:");
		int year3 = input.nextInt();
		MyDate z = new MyDate();
		z.setDate(day3, month3, year3);
		 
		System.out.println("\n\nDate1 = " + x); 
		System.out.println("Date2 = " + y); 
		System.out.println("Date3 = " + z);
		
		int diff = x.difference(y);
		System.out.println("\n\nDifference between Date1 and Date2: " + Math.abs(diff) +" days"); 
		
		System.out.println("\n\nCompare:"); 
		if(x.compareTo(y) == 1) {
			System.out.println("Date2 is greater than Date1.");
		}
		else if(x.compareTo(y) == -1) {
			System.out.println("Date1 is greater than Date2.");
		}
		else {
			System.out.println("Date1 and Date2 are same.");
		}
		
		System.out.println("\nCloning Data (Date3) = " + z.clone()); 
		
		input.close();
	}
}

