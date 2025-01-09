package Array;

import java.util.Scanner;

public class Shifting_elements_in_array {
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
		
		double temp = numbers[0];
		for(int i = 1; i<numbers.length; i++) {
			numbers[i-1] = numbers[i];
		}
		numbers[numbers.length-1] = temp;
		System.out.println();
		for(int i=0; i<numbers.length; i++) {
			System.out.println("numbers [" + i + "] = " + numbers[i]);
		}
		input.close();
	}
}
