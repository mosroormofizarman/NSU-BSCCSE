package cse215_lab_tasks_10_problem02;

import java.util.Scanner;

import cse215_lab_tasks_10.Flower;
import cse215_lab_tasks_10.Herb;
import cse215_lab_tasks_10.Plant;

class Plant{
	private String name;
	private String color;
	
	public Plant() {
		
	}
	public Plant(String name, String color) {
		this.name = name;
		this.color = color;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getColor() {
		return color;
	}
	public void setColor(String color) {
		this.color = color;
	}
	public String toString() {
		return "Plant [name=" + name + ", color=" + color + "]";
	}
	
}

class Herb extends Plant{
	private boolean isMedicinal;
	private String season;
	
	public Herb() {

	}
	public Herb(String name, String color, boolean isMedicinal, String season) {
		super(name, color);
		this.isMedicinal = isMedicinal;
		this.season = season;
	}
	public boolean getIsMedicinal() {
		return isMedicinal;
	}
	public void setIsMedicinal(boolean isMedicinal) {
		this.isMedicinal = isMedicinal;
	}
	public String getSeason() {
		return season;
	}
	public void setSeason(String season) {
		this.season = season;
	}
	public String toString() {
		return "Herb [isMedicinal=" + isMedicinal + ", season=" + season + "]";
	}
	
}

class Flower extends Plant{
	private boolean hasSmell;
	private boolean hasThorn;
	
	public Flower() {
		
	}
	
	public Flower(String name, String color, boolean hasSmell, boolean hasThorn) {
		super(name, color);
		this.hasSmell = hasSmell;
		this.hasThorn = hasThorn;
	}
	public boolean getHasSmell() {
		return hasSmell;
	}
	public void setHasSmell(boolean hasSmell) {
		this.hasSmell = hasSmell;
	}
	public boolean getHasThorn() {
		return hasThorn;
	}
	public void setHasThorn(boolean hasThorn) {
		this.hasThorn = hasThorn;
	}
	public String toString() {
		return "Flower [hasSmell=" + hasSmell + ", hasThorn=" + hasThorn + "]";
	}
	
}

public class Plant_Herb_Flower {
	static Scanner input = new Scanner(System.in);
	public static void main(String[] args) {
		int value = input.nextInt();
		Plant [] plants = new Plant [value];
		String namep = input.next();
		String colorp = input.next();
		Plant p1 = new Plant(namep, colorp);
		add(plants, p1);
		String namef = input.next();
		String colorf = input.next();
		boolean hasSmellf = input.nextBoolean();
		boolean hasThornf = input.nextBoolean();
		p1 = new Flower(namef, colorf, hasSmellf, hasThornf);
		add(plants, p1);
		String nameh = input.next();
		String colorh = input.next();
		boolean isMedicinalh = input.nextBoolean();
		String seasonh = input.next();
		p1 = new Flower(nameh, colorh, hasSmellf, hasThornf);
		p1 = new Flower("Rose", "Red", true, true);
		add(plants, p1);
		display();
		remove("Tulsi");
		display();
		search("Almond");
		search("Tulsi");
		System.out.println(p2.toString());
	}
	public static void add(Plant [] plants, Plant p) {
		for(int i=0; i<=plants.length-1; i++) {
			plants [i] = p;
		}
	}
	public static void remove(Plant[] plants, String n) {
		boolean flag = false;
		for(int i=0; i<=plants.length-1; i++) {
			if(plants[i].getName().equalsIgnoreCase(n)) {
				flag = true;
				plants[i] = null;
			}
			if(flag) {
				plants[i] = plants[++i];
				if(plants.length== plants.length-1) {
					break;
				}
			}
		}
	}
	public static Plant search(Plant [] plants, String n) {
		for(int i=0; i<=plants.length-1; i++) {
			if(plants[i].getName().equalsIgnoreCase(n)) {
				return plants[i];
			}
		}
		return new Plant();
	}
	public static void display(Plant [] plants) {
		for(int i=0; i<=plants.length-1; i++) {
			System.out.println(plants[i].toString());
		}
	}
}
