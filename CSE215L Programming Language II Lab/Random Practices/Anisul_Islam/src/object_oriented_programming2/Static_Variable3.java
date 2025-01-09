package object_oriented_programming2;

class Student2{
	static int count = 0;
	
	Student2(){
		count++;
	}
	
	void displayInformation() {
		System.out.println("Total Student = " + count);
	}
}

public class Static_Variable3 {
	public static void main(String[] args) {
		Student2 S1 = new Student2();
		S1.displayInformation();
		
		Student2 S2 = new Student2();
		S2.displayInformation();
		
		Student2 S3 = new Student2();
		S3.displayInformation();
		
	}
}
