package object_oriented_programming2;

class Use_of_Static_Variable{
	 String uniname = "North South University";
	 static String uniname2 = "SAC";
}

public class Static_Variable2 {
	public static void main(String[] args) {
		Use_of_Static_Variable ob1 = new Use_of_Static_Variable();
		System.out.println("Name: " + ob1.uniname);
		System.out.println("Name: " + Use_of_Static_Variable.uniname2);
	}
}
