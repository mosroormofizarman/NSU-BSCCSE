package object_oriented_programming3;

class Person{
	private String name;
	private int age;
	
	public void setName(String name) {
		this.name = name;
	}
	
	public String getName() {
		return name;
	}
	
	public void setAge(int age) {
		this.age = age;
	}
	
	public int getAge() {
		return age;
	}
	
	/*void displayInformation() {
		System.out.println("Name: " + name);
		System.out.println("Age: " + age);
	}*/
}

public class Setter_and_Getter {
	public static void main(String[] args) {
		Person p1 = new Person();
		p1.setName("Mosroor Mofiz Arman");
		p1.setAge(100);
		//p1.displayInformation();
		
		System.out.println("Name: " + p1.getName());
		System.out.println("Age: " + p1.getAge());
	}
}
