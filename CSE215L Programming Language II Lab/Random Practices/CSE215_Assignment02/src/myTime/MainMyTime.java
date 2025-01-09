package myTime;

import java.util.Calendar;

class MyTime implements Comparable<MyTime>, Cloneable{
	private int hour; 
	private int minute;
	private int second;
	
	public MyTime() {
		hour = 0; 
		minute = 0;
		second = 0; 

	}
	public MyTime(String s) {
		String[] t = s.split(":"); 
		hour = Integer.parseInt(t[0]); 
		minute = Integer.parseInt(t[1]);
		second = Integer.parseInt(t[2]);

	}
	public int getHour() {
		return hour;
	}
	public void setHour(int hour) {
		this.hour = hour;
	}
	public int getMinute() {
		return minute;
	}
	public void setMinute(int minute) {
		this.minute = minute;
	}
	public int getSecond() {
		return second;
	}
	public void setSecond(int second) {
		this.second = second;
	}
	public MyTime(Calendar t) {
		hour = t.get(Calendar.HOUR_OF_DAY); 
		minute = t.get(Calendar.MINUTE);
		second = t.get(Calendar.SECOND); 
	}
	 public boolean setTime(int hh, int mm , int ss) {
		hour = hh; 
		minute = mm;
		second = ss; 
		if(hh >= 0 && mm >= 0 && ss >= 0 && hh < 24 && mm < 24 && ss < 24) {
			return true;
		}
		
		return false; 
	}
	 public MyTime getTime() { 
		 return this;
	} 
	 public long difference(MyTime t) { 
		int temp = compareTo(t);
		
		if(temp == 0) {
			return 0;
		}
		
		MyTime x = this;
		MyTime y = t;
		
		if(temp == -1) { 
			MyTime a = x; 
			x = y;
			y = a;
	}
	Calendar c1 = Calendar.getInstance(); 
	Calendar c2 = Calendar.getInstance();
	
	c1.set(0, 0, 0, x.getHour(), x.getMinute(), x.getSecond());
	c2.set(0, 0, 0, y.getHour(), y.getMinute(), y.getSecond());
	
	long res = c1.getTimeInMillis() - c2.getTimeInMillis(); 
	return res; 
	
		 
	 }
	 public int compareTo(MyTime t) {
		if(t.hour == hour && t.minute == minute && t.second == second) {
			return 0;
		}
		
		if(hour < t.hour) {
			return -1; 
		}
		if(hour > t.hour) {
			return 1;
		}
		
		if(minute < t.minute) {
			return -1;
		}
		 
		if(minute > t.minute) {
			return 1;
		}
		if(second < t.second) {
			return -1; 
		}
		if(second > t.second) {
			return 1;
		}
		return 1; 

	}
	public MyTime clone() { 
		MyTime temp = new MyTime(); 
		temp.setTime(hour, minute, second); return temp; 
	}
	public String toString() {
		 return String.format("%2d:%2d:%2d", hour, minute, second);
	}

}

public class MainMyTime {
	public static void main(String[] args) { 
		MyTime x = new MyTime();
		x.setTime(10, 12, 13); 
		MyTime y = new MyTime(Calendar.getInstance()); 
		MyTime z = new MyTime("11:10:20"); 
		System.out.println("x = " + x); 
		System.out.println("y = " + y); 
		System.out.println("z = " + z);
		System.out.println("\n---- Comparing ----"); 
		System.out.println("x.compareTo(y) = " + x.compareTo(y)); 
		System.out.println("y.compareTo(x) = " + y.compareTo(x)); 
		System.out.println("y.compareTo(z) = " + y.compareTo(z));
		System.out.println("y.compareTo(y) = " + y.compareTo(y)); 
		System.out.println("\nCloning Data (z) = " + z.clone()); 
		System.out.println("\nMilliseconds b/w x,y = " + x.difference(y)); 
		}

}
