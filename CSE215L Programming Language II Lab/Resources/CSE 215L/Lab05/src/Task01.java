import java.util.Scanner;

public class Task01 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int[] myList = new int[10];
		for(int i=0; i<10; i++)
			myList[i] = in.nextInt();
		for(int i=9; i>=0; i--)
			System.out.println(myList[i]);
	}

}
