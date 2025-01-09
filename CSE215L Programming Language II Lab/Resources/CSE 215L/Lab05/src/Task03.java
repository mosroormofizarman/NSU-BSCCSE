import java.util.Scanner;

public class Task03 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int[] myList = new int[10];
		int count =0;
		System.out.print("Enter ten numbers : ");
		for(int i=0; i<10; i++){
			int n = in.nextInt();
			int flag = 1;
			for(int j=0; j<myList.length; j++){
				if(myList[j]==n){
					flag=0;
					break;
				}
			}
			if(flag==1){
				myList[i]=n;
				count++;
			}
		}
		System.out.println("The number of distinct number is "+count);
		System.out.print("The distinct numbers are : ");
		for(int i=0; i<myList.length; i++){
			if(myList[i]!=0){
				System.out.print(myList[i]+" ");
			}
		}
			
	}

}
