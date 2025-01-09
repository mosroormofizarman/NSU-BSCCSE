package Array;

import java.util.Scanner;

public class Summing_all_elements_with_array {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int size = input.nextInt();
		int [] numbers = new int [size];
		for(int i=0; i<numbers.length; i++) {
			numbers[i] = input.nextInt();
		}
		double total = 0;
		for(int i=0; i<numbers.length; i++) {
			System.out.println("numbers [" + i + "] = " + numbers[i]);
			total += numbers[i];
		}
		System.out.println("Sum of elements: " + total);
		input.close();
	}
}
