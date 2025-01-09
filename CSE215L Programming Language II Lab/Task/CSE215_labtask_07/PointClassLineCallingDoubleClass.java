package CSE215_labtask_07;

import java.util.Scanner;

class Point{
	private int x, y;
	
	public Point(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	public Point() {
		
	}
	
	public int getX() {
		return this.x;
	}
	
	public int getY() {
		return this.y;
	}
	
	public void setX(int x) {
		this.x = x;
	}
	
	public void setY(int y) {
		this.y = y;
	}
	
	public String toString() {
		return "(" + this.x + ", " + this.y + ")";
	}
	
	public double distance(Point point) {
		 double dis = Math.sqrt((this.y-this.x)*(this.y-this.x));
		 return dis;
	}
}

class Line{
	private Point start, end;
	
	public Line(Point start, Point end) {
		this.start = start;
		this.end = end;
	}
	
	public Line(int x1, int y1, int x2, int y2) {
		this.start = new Point(x1, y1);
		this.end = new Point(x2, y2);;
	}
	
	public Point getStart() {
		return this.start;
	}
	
	public Point getEnd() {
		return this.end;
	}
	
	public void setStart(Point start) {
		this.start = start;
	}
	
	public void setEnd(Point end) {
		this.end = end;
	}
	
	public double length() {
		return this.start.distance(this.end);
	}
}

public class PointClassLineCallingDoubleClass {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int x01 = input.nextInt();
		int y01 = input.nextInt();
		int x02 = input.nextInt();
		int y02 = input.nextInt();
		
		Point point01 = new Point();
		Point point02 = new Point();
		
		point01.setX(x01);
		point01.setX(y01);
		point02.setY(x02);
		point02.setY(y02);
		
		double result = point01.distance(point02);
		
		System.out.println(result);
		
		input.close();
	}
}
