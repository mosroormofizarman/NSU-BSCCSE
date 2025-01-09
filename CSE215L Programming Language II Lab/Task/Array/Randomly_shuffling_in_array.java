package Array;

import java.util.Scanner;

public class Randomly_shuffling_in_array {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int size = input.nextInt();
		double [] numbers = new double [size];
		for(int i=0; i<numbers.length; i++) {
			numbers[i] = input.nextInt();
		}
		for(int i=0; i<numbers.length; i++) {
			System.out.println("numbers [" + i + "] = " + numbers[i]);
		}
		
		for(int i = numbers.length-1; i>0; i--) {
			int j = (int) (Math.random()*(i+1));
			
			double temp = numbers[i];
			numbers[i] = numbers[j];
			numbers[j] = temp;
		}
		System.out.println();
		for(int i=0; i<numbers.length; i++) {
			System.out.println("numbers [" + i + "] = " + numbers[i]);
		}
		input.close();
	}
}
