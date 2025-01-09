package cse215_lab_tasks_12;

import java.util.Scanner;

interface Discountable{
	double discountedPrice(double price);
}

class BestForCustomer implements Discountable{
	private double percentage;
	private double threshold;
	private double discount;
	
	public BestForCustomer(double percentage, double threshold, double discount) {
		super();
		this.percentage = percentage;
		this.threshold = threshold;
		this.discount = discount;
	}
	public double getPercentage() {
		return percentage;
	}
	public void setPercentage(double percentage) {
		this.percentage = percentage;
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
		if(threshold>200) {
			return price - (price*(discount/100));
		}
		else {
			return price - (price*(percentage/100));
		}
	}
}

public class BestforCustomer_Interface {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		double p = input.nextDouble();
		double d1 = input.nextDouble();
		double d2 = 10;
		
		Discountable ob = new BestForCustomer(d1, p, d2);
		System.out.printf("%.2f\n", ob.discountedPrice(p));
		
		input.close();
	}
}
