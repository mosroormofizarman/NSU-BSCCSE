import java.util.*;

public class Task04 {
	public static void displaySortedNumbers(double num1, double num2, double num3) {
		double arr[] = {num1, num2, num3};
		Arrays.sort(arr);
		System.out.println(arr[0] + " " + arr[1] + " " + arr[2]);
	}
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("Enter three numbers: ");
		double number1 = input.nextDouble();
		double number2 = input.nextDouble();
		double number3 = input.nextDouble();

		displaySortedNumbers(number1, number2, number3);
	}

	
}
