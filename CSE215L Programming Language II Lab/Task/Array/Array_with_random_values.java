package Array;

import java.util.Scanner;
public class Array_with_random_values {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int size = input.nextInt();
		double [] numbers = new double [size];
		for(int i=0; i<numbers.length; i++) {
			numbers[i] = (Math.random() * 100);
		}
		for(int i=0; i<numbers.length; i++) {
			System.out.println("numbers [" + i + "] = " + numbers[i]);
		}
		input.close();
	}

}
