import java.util.*;
/**
 * This is the first programming assignment for CSE215 section 2 and 3. 
 */

/*
 * Name: Townim Faisal
 * ID: 1721327042
 * Section No: 2
 */

public class CourseManagement {

	public static void main(String[] args) { 
		Scanner input = new Scanner(System.in);
		//declare the needed storage for students' information here
		String[] StudentNames = new String[35]; 
		int[] studentID = new int[35];
		double[] scores = new double[35]; 
		double[] gradeScale = new double[11];
		String[] gradeStudents = new String[35];
		
		//Prompt the user to input the students' basic information here and take those inputs using appropriate method
		inputStudent(StudentNames, studentID);
		
		//Display the students' information in the following format after sorting them according to their ID:
		//Sl.	ID			Name
		int[] studentIDINdex = sort(studentID);
		System.out.println("Sl.\tID\t\t\tName");
		int i=1;
		for(int index : studentIDINdex){
			if(studentID[index]!=0)
				System.out.println((i++)+"\t"+studentID[index]+"\t\t\t"+StudentNames[index]);
		}
		//Prompt the user to set the threshold score for each grade into an array of double
		String[] grades = {"A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "F"};
		for(i=0; i<11; i++){
			System.out.print("Enter threshold score for "+grades[i]+": ");
			gradeScale[i] = input.nextDouble();
		}
				
		//Take input for each exam/HW and update the scores
		System.out.println("Enter the quiz 1 marks serially: (until input -1)");
		updateScore(scores, 10);
		System.out.println("Enter the quiz 2 marks serially: (until input -1)");
		updateScore(scores, 10);
		System.out.println("Enter the quiz 3 marks serially: (until input -1)");
		updateScore(scores, 10);
		System.out.println("Enter the mid 1 marks serially: (until input -1)");
		updateScore(scores, 20);
		System.out.println("Enter the mid 2 marks serially: (until input -1)");
		updateScore(scores, 20);
		System.out.println("Enter the final marks serially: (until input -1)");
		updateScore(scores, 30);
		
		//Finally calculate the final grade for every students
		gradeStudents = calculateGrade(scores, gradeScale);
		
		//Now display the final status of the entire class sorted by their scores (highest to lowest) as follows:
		//Sl.	ID			Name						Score		Grade
		studentIDINdex = sort(scores);
		System.out.println("Sl.\tID\t\t\tName\t\t\tScore\tGrade");
		i=1;
		for(int index : studentIDINdex){
			if(studentID[index]!=0)
				System.out.println((i++)+"\t"+studentID[index]+"\t\t\t"+StudentNames[index]+"\t\t\t"+scores[index]+"\t"+gradeStudents[index]);
		}

	}
	
	public static void inputStudent(String[] StudentNames, int[] studentID){
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the students names serially :");
		int c1 = 0;
		String name  = "";
		while(!(name = input.nextLine()).equals("")){
			if(c1 == 35){
				System.out.println("The student limit for the class exceeds");
				break;
			}
			StudentNames[c1++] = name;
		}
		System.out.println("Enter the students IDs serially (until input 0):");
		int c2 = 0;
		while(input.hasNextInt()){
			if(c2 == 35){
				System.out.println("The student limit for the class exceeds");
				break;
			}
			if(c2>c1){
				System.out.println("You have put too much student ID");
				break;
			}
			int ID  = input.nextInt();
			if(ID==0){
				break;
			}
			studentID[c2++] = ID;
		}
		System.out.println("Input taking from user is completed");
	}
	
	public static void updateScore(double[] scores, double totalExamScore){
		Scanner input = new Scanner(System.in);
		int i =0;
		while(true){
			double score = input.nextDouble();
			if(score == -1 || i >= 35){
				break;
			}
			if(score<0){
				System.out.println("please input a valid score");
				continue;
			}
			if(score>totalExamScore){
				System.out.println("the score exceeds total exam score. please input a valid score");
				continue;
			}
			scores[i] += score;
			i++;
		}
	}
	
	public static double maxScore(double[] scores){
		double temp = 0;
		for(double score: scores){
			if(score>temp){
				temp = score;
			}
		}
		return temp;
	}
	
	public static String[] calculateGrade(double[] scores, double[] gradeScale){
		String[] gradeStudents = new String[35];
		String[] grades = {"A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "F"};
		for(int i=0; i<scores.length;i++){
			for(int j=0; j<grades.length; j++){
				if(scores[i]>=gradeScale[j]){
					gradeStudents[i]=grades[j];
					break;
				}
			}
		}
		return gradeStudents;
	}
	
	public static int[] sort(int[] studentID){
		int n = studentID.length;
		int[] studentIDIndex = new int[n];
		for(int i=1; i<n; i++){
			studentIDIndex[i] = i;
		}
		int tmp=0;
        for (int i = 0; i < n-1; i++){
            for (int j = 0; j < n-i-1; j++){
                if (studentID[studentIDIndex[j]] > studentID[studentIDIndex[j+1]]){
                	tmp = studentIDIndex[j + 1];
                	studentIDIndex[j + 1] = studentIDIndex[j];
                	studentIDIndex[j] = tmp;
                }
            }
        }    
		return studentIDIndex;
	}
	
	public static int[] sort(double[] scores){
		int n = scores.length;
		int[] studentIDIndex = new int[n];
		for(int i=1; i<n; i++){
			studentIDIndex[i] = i;
		}
		int tmp=0;
        for (int i = 0; i < n-1; i++){
            for (int j = 0; j < n-i-1; j++){
                if (scores[studentIDIndex[j]] > scores[studentIDIndex[j+1]]){
                	tmp = studentIDIndex[j + 1];
                	studentIDIndex[j + 1] = studentIDIndex[j];
                	studentIDIndex[j] = tmp;
                }
            }
        }    
		return studentIDIndex;
	}

}