package object_oriented_programming;

class Test5 {
	String name, gender;
	int phone;
	
	Test5(){ //Default constructor(If you don't write default constructor, computer will create an invisible default constructor) 
		System.out.println("No value");
		System.out.println("\n");
	}
	
	Test5(String str1, String str2, int num){ //Parametrized Constructor
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

public class Types_of_Constructor {
	public static void main(String[] args) {
		Test5 teacher1 = new Test5("Mosroor Mofiz Arman", "male", 1210101010);
		Test5 teacher2 = new Test5("Loca", "male", 1210101011);
		Test5 teacher3 = new Test5();
		
		teacher1.displayInformation();
		
		teacher2.displayInformation();
		
		teacher3.displayInformation();
	}
}
