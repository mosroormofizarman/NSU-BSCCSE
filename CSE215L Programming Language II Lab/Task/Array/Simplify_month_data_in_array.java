package Array;

import java.util.Scanner;
public class Simplify_month_data_in_array {
	public static void main(String[] args) {
		String [] months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
		System.out.println("Enter a month number (1 to 12) to get that month name: ");
		Scanner input = new Scanner(System.in);
		int monthnumber = input.nextInt();
		
		for(int i=0; i<months.length; i++) {
			if(i==(monthnumber-1)) {
				System.out.println("The month is: " + months[i]);
			}
		}
		input.close();
	}
}
