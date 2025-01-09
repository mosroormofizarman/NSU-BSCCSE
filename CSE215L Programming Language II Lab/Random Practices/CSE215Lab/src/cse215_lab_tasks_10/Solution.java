package cse215_lab_tasks_10;

class Plant{
	private String name = "N/A";
	private String color = "N/A";
	public Plant() {
		
	}
	public Plant(String n, String c) {
		name = n;
		color = c;
	}
	public String getName() {
		return name;
	}
	public String getColor() {
		return color;
	}
	public void setName(String n) {
		name = n;
	}
	public void setColor(String c) {
		color = c;
	}
	public String toString() {
		return "Plant [Name = " + name + ", Color = " + color + "]";
	}
}

class Flower extends Plant{
	private boolean hasSmell;
	private boolean hasThorn;
	
	public Flower() {

	}
	public Flower(String n, String c, boolean smell, boolean thorn) {
		super(n,c);
		hasSmell = smell;
		hasThorn = thorn;
	}
	public boolean getHasSmell() {
		return hasSmell;
	}
	public boolean getHasThorn() {
		return hasThorn;
	}
	public void setHasSmell(boolean smell) {
		hasSmell = smell;
	}
	public void setHasThorn(boolean thorn) {
		hasThorn = thorn;
	}

	public String toString() {
		return "Flower [Name = " + super.getName() + ", Color = "+ super.getColor() + ", hasSmell=" + hasSmell + ", hasThorn=" + hasThorn + "]";
	}
}

class Herb extends Plant{
	private boolean isMedicinal;
	private String Season;
	
	public Herb() {

	}
	public Herb(String n, String c, boolean medicinal, String season) {
		super(n,c);
		isMedicinal = medicinal;
		Season = season;
	}
	public boolean getisMedicinal() {
		return isMedicinal;
	}
	public String getSeason() {
		return Season;
	}
	public void setMedicinal(boolean medicinal) {
		isMedicinal = medicinal;
	}
	public void setSeason(String season) {
		Season = season;
	}
	public String toString() {
		return "Herb [Name = " + super.getName() + ", Color = "+ super.getColor() + ", isMedicinal=" + isMedicinal + ", Season=" + Season + "]";
	}	
}

public class Solution {
	public static Plant [] plants = new Plant [5];
	public static int plantCount = -1;
	public static int findPLant = -1;
	public static void main(String[] args) {
		Plant p1 = new Plant("Almond", "Brown");
		Plant p2 = new Plant();
		add(p1);
		p1 = new Herb("Tulsi", "Green", true, "All");
		add(p1);
		p1 = new Flower("Rose", "Red", true, true);
		add(p1);
		display();
		remove("Tulsi");
		display();
		search("Almond");
		search("Tulsi");
		System.out.println(p2.toString());
	}
	
	public static void add(Plant p) {
		plants [++plantCount] = p;
	}	
	public static void remove(String delete) {
		boolean flag = false;
		for(int i=0; i<=plantCount; ++i) {
			if(plants[i].getName().equalsIgnoreCase(delete)) {
				flag = true;
				plants[i] = null;
			}
			if(flag) {
				plants[i] = plants[++i];
				if(plantCount== plantCount-1) {
					break;
				}
			}
		}
		--plantCount;
	}
	public static Plant search(String find) {
		for(int i=0; i<=plantCount; ++i) {
			if(plants[i].getName().equalsIgnoreCase(find)) {
				System.out.println(plants[i].toString());
			}
		}
		return new Plant();
	}

	public static void display() {
		for(int i=0; i<=plantCount; ++i) {
			System.out.println(plants[i].toString());
		}
	}
}

