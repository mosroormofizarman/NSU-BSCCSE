package Quiz01_Theory;

import java.util.Scanner;
public class Question01_input_a_character_from_user {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		char character = input.next().charAt(0);
		System.out.println("character: " + character);
		
		input.close();
	}

}
