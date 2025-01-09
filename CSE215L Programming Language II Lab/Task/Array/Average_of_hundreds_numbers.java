package Array;

public class Average_of_hundreds_numbers {
	public static void main(String[] args) {
		
		int maxnumber = 100;
		int [] averagenumber = new int [maxnumber];
		int sum = 0;
		double average = 0;
		for(int i=0; i<maxnumber; i++) {
			sum += averagenumber[i];
		}
		average = (sum/maxnumber);
		int count = 0;
		for(int i=0; i<averagenumber.length; i++) {
			if(averagenumber[i]>average) {
				count += 1;
			}
		}
		System.out.println("The quantity of numbers which are above the average number are " + count);
	}

}
