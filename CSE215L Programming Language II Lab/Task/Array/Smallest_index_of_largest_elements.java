package Array;

import java.util.Scanner;

public class Smallest_index_of_largest_elements {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int size = input.nextInt();
		int [] numbers = new int [size];
		for(int i=0; i<numbers.length; i++) {
			numbers[i] = input.nextInt();
		}
		double max = 0;
		int indexOfMax = 0;
		for(int i=0; i<numbers.length; i++) {
			System.out.println("numbers [" + i + "] = " + numbers[i]);
			if(numbers[i]>max) {
				max = numbers[i];
				indexOfMax = i;
			}
		}
		System.out.println("largest element: " + max);
		System.out.println("Smallest index of largest element: " + indexOfMax);
		input.close();
	}
}
