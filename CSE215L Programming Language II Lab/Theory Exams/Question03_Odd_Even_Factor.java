package Quiz01_Theory;

import java.util.Scanner;

public class Question03_Odd_Even_Factor {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.print("When n = ");
		int number = input.nextInt();
		
		int [] oddevenarr = new int [number];
		
		for(int i=0; i<oddevenarr.length; i++) {
			if(number%i==0) {
				if(i%2==0) {
					System.out.println("Even factors is: " + oddevenarr[i]);
				}
			}
		}
		
		for(int i=0; i<oddevenarr.length; i++) {
			if(number%i==0) {
				if(i%2!=0) {
					System.out.println("Even factors is: " + oddevenarr[i]);
				}
			}
		}
		input.close();
	}

}
