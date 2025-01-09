import java.util.Scanner;


public class Task09 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter weight in pounds : ");
		double w = scan.nextDouble();
		System.out.print("Enter height in inches : ");
		double h =scan.nextDouble();
		double h1 = h*0.0254;
		double bmi = (w*0.45359237)/(h1*h1);
		System.out.printf("BMI is %.4f",bmi);

	}

}
