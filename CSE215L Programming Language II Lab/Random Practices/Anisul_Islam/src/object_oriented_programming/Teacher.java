package object_oriented_programming;

class Test {
	String name, gender;
	int phone;

}

public class Teacher{
	public static void main(String[] args) {
		Test teacher1 = new Test();
		Test teacher2 = new Test();
		
		teacher1.name = "Mosroor Mofiz Arman";
		teacher1.gender = "male";
		teacher1.phone = 1210101010;
		
		teacher2.name = "Loca";
		teacher2.gender = "male";
		teacher2.phone = 1210101011;
		
		System.out.println("Name: " + teacher1.name);
		System.out.println("Gender: " + teacher1.gender);
		System.out.println("Phone: " + teacher1.phone);
		
		System.out.println("\n");
		
		System.out.println("Name: " + teacher2.name);
		System.out.println("Gender: " + teacher2.gender);
		System.out.println("Phone: " + teacher2.phone);
		
	}
}
