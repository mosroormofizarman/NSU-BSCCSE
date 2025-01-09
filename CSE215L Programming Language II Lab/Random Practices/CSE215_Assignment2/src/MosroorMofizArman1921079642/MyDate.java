package MosroorMofizArman1921079642;

import java.util.Calendar;
import java.util.Date;
import java.util.StringTokenizer;

public class MyDate implements Comparable<MyDate>,Cloneable
{
   int day,month,year; //declare data members
  
   public MyDate() //define default constructor
   {
       Date d=new Date();
       day=d.getDay();
       month=d.getMonth();
       year=d.getYear();
   }
  
   public MyDate(String s) //define constructor with data members
   {
       StringTokenizer st=new StringTokenizer(s,"/");
       day=Integer.parseInt(st.nextToken());
       month=Integer.parseInt(st.nextToken());
       year=Integer.parseInt(st.nextToken());
   }
   public MyDate(Calendar dt) //define constructor with Calender object
   {
       day=dt.get(Calendar.DAY_OF_WEEK);
       month=dt.get(Calendar.MONTH);
       year=dt.get(Calendar.YEAR);
   }
   public boolean setDate(int d,int m,int y) //define setDate() method to set date
   {
       day=d;
       month=m;
       year=y;
       return true;
   }
   public MyDate getDate() //define getDate() method;
   {
       return new MyDate(day+"/"+month+"/"+year);
   }
   public int difference(MyDate d) //define differnce() that returns int
   {
       int dd=this.day-d.day;
       return dd;
   }
   @Override
   public int compareTo(MyDate d) //define compareTo() method to compare
   {
       if(this.day>d.day)
           return 1;
       else if(this.day<d.day)
           return -1;
       else
       return 0;
   }
   public Object clone() //create the copy of object
   {
       try
       {
           return super.clone(); //call the super class method
       }
       catch(CloneNotSupportedException e)
       {
           System.out.println("Clone not supported exception is thrown.");
       }
       return null;
   }
   public String toString() //define toString() method to provide String representaton
   {
       return day+"/"+month+"/"+year;
   }
  
   public static void main(String[] args) //define main() method
   {
       MyDate x=new MyDate(); //create objects x,y,z
       Calendar c=Calendar.getInstance();
       c.set(2008,07,22);
       MyDate y=new MyDate(c);
       MyDate z=new MyDate("27/08/2005");
      
       x.setDate(20,01,2010); //call the setDate() method to set date
       System.out.println("Date is:"+x.getDate());
      
       System.out.println("Date1: "+x.toString()); //call the toString() method
       System.out.println("Date2: "+y.toString());
       System.out.println("Date3: "+z.toString());
      
       MyDate d=(MyDate) x.clone(); //cal the clone() method
       System.out.println("Copy of object:"+d.toString());
      
       System.out.println("Difference between date:"+x.difference(z)); //call the difference() method
      
       System.out.println("Compare dates:");   
       int i=x.compareTo(y); //call the compareTo() method
       if(i==1)
           System.out.println("Date1 is greater than date2");
       else if(i==-1)
           System.out.println("\nDate1 is less than date2");
       else
           System.out.println("\nDates are equal");
   }
}
