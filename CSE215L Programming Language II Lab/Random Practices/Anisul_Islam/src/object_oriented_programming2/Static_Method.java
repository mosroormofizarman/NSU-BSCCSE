package object_oriented_programming2;

class Use_of_Static_Method{
	 void display1() {
		 System.out.println("I am non static method");
	 }
	 
	 static void display2() {
		 System.out.println("I am static method");
	 }
}

public class Static_Method {
	public static void main(String[] args) {
		Use_of_Static_Method sm1 = new Use_of_Static_Method();
		sm1.display1();
		
		Use_of_Static_Method.display2();
	}
}
