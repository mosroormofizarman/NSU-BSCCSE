package object_oriented_programming;

class Test2 {
	String name, gender;
	int phone;
	
	void displayInformation() {
		System.out.println("Name: " + name);
		System.out.println("Gender: " + gender);
		System.out.println("Phone: " + phone);
		System.out.println("\n");
	}

}

public class TeacherByMethod {
	public static void main(String[] args) {
		Test2 teacher1 = new Test2();
		Test2 teacher2 = new Test2();
		
		teacher1.name = "Mosroor Mofiz Arman";
		teacher1.gender = "male";
		teacher1.phone = 1210101010;
		teacher1.displayInformation();
		
		teacher2.name = "Loca";
		teacher2.gender = "male";
		teacher2.phone = 1210101011;
		teacher2.displayInformation();
		
	}
}
