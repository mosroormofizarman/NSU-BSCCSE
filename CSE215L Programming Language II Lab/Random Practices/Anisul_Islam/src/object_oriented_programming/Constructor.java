package object_oriented_programming;

class Test4 {
	String name, gender;
	int phone;
	
	Test4(String str1, String str2, int num){
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

public class Constructor {
	public static void main(String[] args) {
		Test4 teacher1 = new Test4("Mosroor Mofiz Arman", "male", 1210101010);
		Test4 teacher2 = new Test4("Loca", "male", 1210101011);
		
		teacher1.displayInformation();
		
		teacher2.displayInformation();
	}
}
