import java.util.Scanner;

public class Task01 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		System.out.print("Enter a,b,c : ");
		int a = in.nextInt();
		int b = in.nextInt();
		int c = in.nextInt();
		int d = b*b-4*a*c;
		if(d>0){
			double r1 = (-b-Math.sqrt(d))/(2*a);
			double r2 = (-b+Math.sqrt(d))/(2*a);
			System.out.println("the roots are "+r1+" and "+r2);
		}else if(d==0){
			double r1 = (-b)/(2*a);
			System.out.println("the root is "+r1);
		}else{
			System.out.println("The equation has no real roots");
		}

	}

}
