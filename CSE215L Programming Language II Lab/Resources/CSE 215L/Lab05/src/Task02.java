import java.util.Scanner;

public class Task02 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int[] myList = new int[101];
		System.out.print("Enter the integers between 1 and 100 : ");
		while(true){
			int n = in.nextInt();
			if(n==0){break;}
			myList[n] = ++myList[n];
		}
		for(int i=1; i<101; i++){
			if(myList[i]!=0){
				System.out.println(i +" occurs "+myList[i]+" times");
			}
		}
	}

}
