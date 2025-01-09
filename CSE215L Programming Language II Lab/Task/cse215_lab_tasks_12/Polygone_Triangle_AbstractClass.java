package cse215_lab_tasks_12;

import java.util.Scanner;

abstract class Polygone{
	private int numSide;

	public Polygone(int numSide) {
		this.numSide = numSide;
	}

	public int getNumSide() {
		return numSide;
	}

	public void setNumSide(int numSide) {
		this.numSide = numSide;
	}
	
	public abstract double area(); 
	public abstract double perimeter(); 
	
}

class Triangle extends Polygone{
	private double sideA;
	private double sideB;
	private double sideC;
	
	public Triangle(int numSide, double sideA, double sideB, double sideC) {
		super(numSide);
		this.sideA = sideA;
		this.sideB = sideB;
		this.sideC = sideC;
	}
	public double getSideA() {
		return sideA;
	}
	public void setSideA(double sideA) {
		this.sideA = sideA;
	}
	public double getSideB() {
		return sideB;
	}
	public void setSideB(double sideB) {
		this.sideB = sideB;
	}
	public double getSideC() {
		return sideC;
	}
	public void setSideC(double sideC) {
		this.sideC = sideC;
	}
	public double area() {
		double s = perimeter()/2;
		return Math.sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));
	}
	public double perimeter() {
		return sideA + sideB + sideC;
	}
}

public class Polygone_Triangle_AbstractClass {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int side = 3;
		double a = input.nextDouble();
		double b = input.nextDouble();
		double c = input.nextDouble();
		if(a+c>b && b+c>a && a+b>c) {
			Triangle t1 = new Triangle(side, a, b, c);
			System.out.printf("%.2f\n" , t1.area());
			System.out.printf("%.2f\n" , t1.perimeter());
		}
		else {
			System.out.println("INVALID");
		}
		
		input.close();
	}
}
