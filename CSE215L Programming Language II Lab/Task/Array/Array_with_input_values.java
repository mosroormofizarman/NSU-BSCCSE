package Array;

import java.util.Scanner;
public class Array_with_input_values {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int size = input.nextInt();
		int [] numbers = new int [size];
		for(int i=0; i<numbers.length; i++) {
			numbers[i] = input.nextInt();
		}
		for(int i=0; i<numbers.length; i++) {
			System.out.println("numbers [" + i + "] = " + numbers[i]);
		}
		input.close();
	}
}
