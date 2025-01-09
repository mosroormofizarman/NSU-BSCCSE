package plant_type_add_search;

import java.util.Scanner;

class Plant{
	private String name;
	private String color;
	private String type;
	public Plant(String name, String color, String type) {
		this.name = name;
		this.color = color;
		this.type = type;
	}
	public String getName() {
		return name;
	}
	public String getColor() {
		return color;
	}
	public String getType() {
		return type;
	}
	public String toString() {
		return getName();
	}
}

public class Plant_Add_Type_Search {
	static Scanner input = new Scanner(System.in);
	public static void main(String[] args) {
		System.out.println("How many plants do you want to add?");
		int value = input.nextInt();
		Plant [] plants = new Plant[value];
		
		System.out.println("\n\nEnter all the Plants name, color, and type:");
		add(plants);
		for (int i = 0; i < plants.length; i++) {
            System.out.println(plants[i]);
            System.out.printf("\n");
        }
		System.out.println("\n\nEnter file type to search:");
		String type = input.next();
		String typename = Search(plants,type);
		System.out.println("Search Results:");
		System.out.println(typename);
	}
	public static void add(Plant [] plants) {
		for(int i=0; i<plants.length; i++) {
			String name = input.next();
            String color = input.next();
            String type = input.next();
            System.out.printf("\n");
			plants [i] = new Plant(name, color, type);
		}
	}
	public static String Search (Plant [] plants, String type) {
		String planttype = new String();
		for(int i=0; i<plants.length; i++) {
			if(plants[i].getType().equalsIgnoreCase(type)) {
				planttype += plants[i].getName();
			}
		}
		return planttype;
	}
}
