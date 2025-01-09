package quiz03;

import java.util.Scanner;

public class AutomorphicNumbers {
	public static boolean automorphic(int num) {
		int count = 0;
		int square = num*num;
        int temp =num;
        boolean pm;
 
        while(temp>0){
            count++;
            temp=temp/10;
        }
 
        int lastNumber = (int) (square%(Math.pow(10,count)));
        
        if(num == lastNumber) {
        	pm = true;
        }
        else {
        	pm = false;
        }
        return pm;
	}
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        
        boolean am = automorphic(number);
        
        System.out.println(number + "^2 = " + (number*number));
        
        if(am) {
        	System.out.println(number + " is an automorphic number.");
        }
        else {
        	System.out.println(number + " is not an automorphic number.");
        }
        
        input.close();
	}
}
