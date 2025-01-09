package object_oriented_programming2;

class Student{
	String name;
	int id;
	static String uniname = "NSU";
	
	Student(String str1, int num){
		name = str1;
		id =num;
	}
	
	void displayInformation() {
		System.out.println("Name: " + name);
		System.out.println("ID: " + id);
		System.out.println("University Name: " + uniname);
		System.out.println("\n");
	}
}

public class Static_Variable {
	public static void main(String[] args) {
		Student S1 = new Student("Mosroor Mofiz", 215);
		Student S2 = new Student("Arman", 216);
		
		S1.displayInformation();
		S2.displayInformation();
		
	}
}
