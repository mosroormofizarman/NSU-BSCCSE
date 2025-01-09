package Quiz01_Theory;

public class TwoD_array_Row_Column_random_number {
	public static void main(String[] args) {
		int row = 4;
		int column = (int) (3 + (Math.random()*3));
		
		int [][] arr = new int [row][column];
		
		int sum = 0;
		for(int i=0; i<row; i++) {
			for(int j=0; j<column; j++) {
				arr[i][j] = (int) (11 + (Math.random()*10));
				sum += arr[j][i];
			}
		}
		System.out.println("The sum of the elemnts by column: " + sum);
		
	}

}
