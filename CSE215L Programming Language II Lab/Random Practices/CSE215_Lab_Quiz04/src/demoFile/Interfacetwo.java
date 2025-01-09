package demoFile;

import java.util.Scanner;

interface Validate{
	boolean validateMob();
}

class Contact implements Validate{
	private String name;
	private String mobile;
	private String address;
	
	public Contact() {
		 
	}
	public Contact(String name, String mobile, String address) {
		this.name = name;
		this.mobile = mobile;
		this.address = address;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getMobile() {
		return mobile;
	}
	public void setMobile(String mobile) {
		this.mobile = mobile;
	}
	public String getAddress() {
		return address;
	}
	public void setAddress(String address) {
		this.address = address;
	}

	public boolean validateMob() {
		for(int i=0; i<=phn.length-1; i++) {
			if(phn[i].getMobile.length() = 11) {
				return true;
			}
		}
		return false;
	}
	
	public void findGPNumbers() {
		
	}
	
	public String toString() {
		return "Listed Contacts:\n\n" + name + "\n" + mobile + "\n" + address;
	}
	
}

public class Interfacetwo {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("How many contacts do you want to add?");
		int value = input.nextInt();
		Contact [] phn = new Contact[value];
		
		for(int i=1; i<=value; i++) {
			String name = input.nextLine();
            String mobile = input.nextLine();
            String address = input.nextLine();
            System.out.printf("\n");
            phn [i] = new Contact(name, mobile, address);
		}

		input.close();
	}

}
