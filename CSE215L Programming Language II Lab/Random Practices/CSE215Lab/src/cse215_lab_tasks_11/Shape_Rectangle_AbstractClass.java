package cse215_lab_tasks_11;

import java.util.Scanner;

abstract class Shape{
	private String name;
	
	public Shape(String name) {
		this.name = name;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}
	
	public abstract double area();
	public abstract double perimeter();
}

class Rectangle extends Shape{
	private double length;
	private double width;
	
	public Rectangle(String name, double length, double width) {
		super(name);
		this.length = length;
		this.width = width;
	}
	public double getLength() {
		return length;
	}
	public void setLength(double length) {
		this.length = length;
	}
	public double getWidth() {
		return width;
	}
	public void setWidth(double width) {
		this.width = width;
	}
	public double area() {
		return length*width;
	}
	public double perimeter() {
		return 2*(length+width);

	}
}

public class Shape_Rectangle_AbstractClass {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int len = input.nextInt();
		int wid = input.nextInt();
		Rectangle r1 = new Rectangle("Rectangular", len, wid);
		System.out.println(r1.area());
		System.out.println(r1.perimeter());
		
		input.close();
	}
}
