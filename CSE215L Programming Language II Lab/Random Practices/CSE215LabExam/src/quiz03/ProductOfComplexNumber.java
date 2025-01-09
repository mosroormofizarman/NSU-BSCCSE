package quiz03;

import java.util.Scanner;

class Complex{
	private int real;
	private int imag;
	public Complex() {
		
	}
	public Complex(int real, int imag) {
		this.real = real;
		this.imag = imag;
	}
	public int getReal() {
		return real;
	}
	public void setReal(int real) {
		this.real = real;
	}
	public int getImag() {
		return imag;
	}
	public void setImag(int imag) {
		this.imag = imag;
	}
	
	public Complex product(Complex c) {
        this.real = (this.real * c.real) - (this.imag * c.imag);
        this.imag = (this.real * c.imag) + (this.imag * c.real); 
        
        return new Complex(real, imag);
	}
	public String toString() {
		return this.real + this.imag + "i";
	}
	
}

public class ProductOfComplexNumber {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
        int r1 = input.nextInt();
        int i1 = input.nextInt();
        int r2 = input.nextInt();
        int i2 = input.nextInt();
        
        Complex num1 = new Complex(r1, i1);
        Complex num2 = new Complex(r2, i2);
        
        Complex result = num1.product(num2);
        
        System.out.println(result.toString());
        
        input.close();
	}
}
