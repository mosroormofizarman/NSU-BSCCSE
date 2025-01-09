package Array;

import java.util.Scanner;

public class Finding_largest_element {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int size = input.nextInt();
		int [] numbers = new int [size];
		for(int i=0; i<numbers.length; i++) {
			numbers[i] = input.nextInt();
		}
		double max = 0;
		for(int i=0; i<numbers.length; i++) {
			System.out.println("numbers [" + i + "] = " + numbers[i]);
			if(numbers[i]>max) {
				max = numbers[i];
			}
		}
		System.out.println("largest element: " + max);
		input.close();
	}
}
