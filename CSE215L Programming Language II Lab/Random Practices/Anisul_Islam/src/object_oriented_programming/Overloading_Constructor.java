package object_oriented_programming;

class Test6 {
	String name, gender;
	int phone;
	
	Test6(){ 
		System.out.println("No information");
		System.out.println("\n");
	}
	
	Test6(String str1, String str2){
		name = str1;
		gender = str2;
	}
	
	Test6(String str1, String str2, int num){
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


public class Overloading_Constructor {
	public static void main(String[] args) {
		Test6 teacher1 = new Test6();
		Test6 teacher2 = new Test6("Loca", "male");
		Test6 teacher3 = new Test6("Mosroor Mofiz Arman", "male", 1210101010);
		
		teacher2.displayInformation();
		
		teacher3.displayInformation();
	}
}
