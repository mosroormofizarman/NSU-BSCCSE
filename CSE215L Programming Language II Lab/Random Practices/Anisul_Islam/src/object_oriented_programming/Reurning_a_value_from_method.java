package object_oriented_programming;

class Test7{
	
	int square() {
		return 5*5;
	}
	
	int square(int value) {
		return value*value;
	}
}

public class Reurning_a_value_from_method {
	public static void main(String[] args) {
		Test7 ob1 = new Test7();
		Test7 ob2 = new Test7();
		int result1 = ob1.square();
		int result2 = ob2.square(5);
		System.out.println("squre root of 5 = " + result1);
		System.out.println("squre root of 5 = " + result2);
		System.out.println("squre root of 5 = " + ob1.square());
		System.out.println("squre root of 5 = " + ob2.square(5));
	}
}
