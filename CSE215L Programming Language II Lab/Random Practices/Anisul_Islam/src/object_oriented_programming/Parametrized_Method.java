package object_oriented_programming;

class Test3 {
	String name, gender;
	int phone;
	
	void setInformation(String str1, String str2, int num) {
		name = str1;
		gender = str2;
		phone = num;
	}
	
	void displayInformation() {
		System.out.println("Name: " + name);
		System.out.println("Gender: " + gender);
		System.out.println("Phone: " + phone);
		System.out.println("\n");
	}

}

public class Parametrized_Method {
	public static void main(String[] args) {
		Test3 teacher1 = new Test3();
		Test3 teacher2 = new Test3();
		
		teacher1.setInformation("Mosroor Mofiz Arman", "male", 1210101010);
		teacher1.displayInformation();
		
		teacher2.setInformation("Loca", "male", 1210101011);
		teacher2.displayInformation();
		
	}
}
