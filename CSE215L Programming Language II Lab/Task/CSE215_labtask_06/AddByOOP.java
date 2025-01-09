package CSE215_labtask_06;

import java.util.Scanner;

class Fraction{
	private int numerator, denominator;
	
	public Fraction() {
		numerator = denominator = 0;
	}
	
	public int getNumerator() {
		return this.numerator;
	}
	
	public void setNumerator(int numerator) {
		this.numerator = numerator;
	}
	
	public int getDenominator() {
		return this.denominator;
	}
	
	public void setDenominator(int denominator) {
		this.denominator = denominator;
	}
	
	public String toString() {
		String ft = this.numerator + "/" + this.denominator;
		return ft;
	}
	
	public Fraction add(Fraction b)
	   {
	 
	      if ((denominator == 0) || (b.denominator == 0))
	      {
	         System.out.println("invalid denominator");
	      }
	     
	      int common = lcd(denominator, b.denominator);
	      Fraction commonA = new Fraction();
	      Fraction commonB = new Fraction();
	      commonA = convert(common);
	      commonB = b.convert(common);
	      
	      Fraction sum = new Fraction();

	      sum.numerator = commonA.numerator + commonB.numerator;
	      sum.denominator = common;
	   
	      sum = sum.reduce();
	      return sum;
	   }

	public int lcd(int denominator1, int denominator2) {
		int factor1 = denominator1;
		while((denominator1 % denominator2) != 0) {
			denominator1 += factor1;
		}
		return denominator1;
	}
	
	public int gcd(int denominator1, int denominator2) {
		int factor2 = denominator2;
		while(denominator2 != 0) {
			factor2 = denominator2;
			denominator2 = denominator1 % denominator2;
			denominator1 = factor2;
		}
		return denominator1;
	}
	
	public Fraction convert(int common)
	   {
	      Fraction result1 = new Fraction();
	      int factor = common / denominator;
	      result1.numerator = numerator * factor;
	      result1.denominator = common;
	      return result1;
	   }

	 public Fraction reduce()
	   {
	      Fraction result = new Fraction();
	      int common = 0;
	      int numerator = Math.abs(this.numerator);
	      int denominator = Math.abs(this.denominator);
	    
	      if (numerator > denominator) {
	    	  common = gcd(numerator, denominator);
	      }
	      else if (numerator < denominator) {
	    	  common = gcd(denominator, numerator);
	      }
	   
	      else {
	    	  common = numerator;
	      }

	      result.numerator = this.numerator / common;
	      result.denominator = this.denominator / common;
	      return result;
	   }	
}

public class AddByOOP {
	Scanner input = new Scanner(System.in);
	int n1 = input.nextInt();
	int d1 = input.nextInt();
	int n2 = input.nextInt();
	int d2 = input.nextInt();
	Fraction f1 = new Fraction();
	Fraction f2 = new Fraction();
	
	f1.setNumerator(n1);
	f1.setDenominator(d1);
	f2.setNumerator(n2);
	f2.setDenominator(d2);

	result = f1.add(f2);
	
	System.out.println(f1);
	System.out.println(f2);
	System.out.println(result);
	
	input.close();
}
