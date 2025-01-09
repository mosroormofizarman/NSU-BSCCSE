package cse215_lab_tasks_11;

import java.util.Scanner;

interface Discountable{
	double discountedPrice(double price);
}

class PercentageDiscount implements Discountable{
	private double percentage; 

	public PercentageDiscount(double percentage) {
		this.percentage = percentage;
	}

	public double getPercentage() {
		return percentage;
	}

	public void setPercentage(double percentage) {
		this.percentage = percentage;
	}

	public double discountedPrice(double price) {
		return price - (price*(percentage/100));
	}
	
}

class ThresholdDiscount implements Discountable{
	private double threshold;
	private double discount;
	
	public ThresholdDiscount(double threshold, double discount) {
		this.threshold = threshold;
		this.discount = discount;
	}

	public double getThreshold() {
		return threshold;
	}

	public void setThreshold(double threshold) {
		this.threshold = threshold;
	}

	public double getDiscount() {
		return discount;
	}

	public void setDiscount(double discount) {
		this.discount = discount;
	}

	public double discountedPrice(double price) {
		if(threshold>100) {
			return price - (price*(discount/100));
		}
		else {
			return price;
		}
	}
}

public class Discount_Interface {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		double p = input.nextDouble();
		double d1 = input.nextDouble();
		
		Discountable ob1 = new PercentageDiscount(d1);
		System.out.println(ob1.discountedPrice(p));
		
		double d2 = 10;
		Discountable ob2 = new ThresholdDiscount(p, d2);
		System.out.println(ob2.discountedPrice(p));
		
		input.close();
	}
}
