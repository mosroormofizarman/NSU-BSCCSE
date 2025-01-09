package EmployeeWithFile;

import java.io.FileInputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.Scanner;

interface PayableTax{
    public static int TAXPERCENTAGE = 15;
    double yearlyTaxfreeIncome();
    double yearlyTaxableIncome();
    double getIncomeTax();
}

abstract class Salary{
    public abstract double yearlySalary();
    public abstract double yearlyBonus();
    public abstract double yearlyNetIncome();
}

class Employee extends Salary implements PayableTax {
    private String Name;
    private String Gender;
    private String NID;
    private String TIN;
    private double MonthlySalary;

    public Employee(String name, String gender, String nid, String tin) {
        Name = name;
        Gender = gender;
        NID = nid;
        TIN = tin;
    }

    public String getName() {
        return Name;
    }

    public String getGender() {
        return Gender;
    }

    public String getNID() {
        return NID;
    }

    public String getTIN() {
        return TIN;
    }

    public String toString() {
        return "Employee [Name=" + Name + ", Gender=" + Gender + ", NID=" + NID + ", TIN=" + TIN + ", MonthlySalary="
                + MonthlySalary + "]";
    }

    public void setMonthlySalary(double amount) {
        MonthlySalary = amount;
    }

    public double yearlyTaxfreeIncome() {
        String g = "Male";
        double maleTaxStartsAfter = 300000;
        double femaleTaxStartsAfter = 450000;
        double yearlyNetIncome=yearlyNetIncome();
        if (getGender().equalsIgnoreCase(g)) {
            if (maleTaxStartsAfter < yearlyNetIncome) {
                return maleTaxStartsAfter;
            }
        } else {
            if (femaleTaxStartsAfter < yearlyNetIncome()) {
                return femaleTaxStartsAfter;
            }
        }
        return yearlyNetIncome;
    }

    public double yearlyTaxableIncome() {
        return yearlyNetIncome() - yearlyTaxfreeIncome();
    }

    public double getIncomeTax() {
        return yearlyTaxableIncome() * (TAXPERCENTAGE / 100.0);
    }

    public double yearlySalary() {
        return MonthlySalary * 12.0;
    }

    public double yearlyBonus() {
        return MonthlySalary * 2.0;
    }

    public double yearlyNetIncome() {
        return yearlySalary() + yearlyBonus();
    }

}

class Faculty extends Employee{
    private double basicSalary;
    private double allowance;

    public Faculty(String name, String gender, String nid, String tin, double basic) {
        super(name, gender, nid, tin);
        basicSalary = basic;
        setAllowance();
        setMonthlySalary(basicSalary+allowance);
    }

    public void setAllowance() {
        allowance = basicSalary*0.5;
    }

    public double getBasicSalary() {
        return basicSalary;
    }

    public String toString() {
        return "Faculty [basicSalary=" + basicSalary + ", allowance=" + allowance + "]";
    }

}

public class Main {
    public static Faculty[] f;

    public static void loadFile() {
        try {
            int personSize = noOfFaculties();
            f = new Faculty[personSize];
            String pathToReadFrom = "C:\\Users\\ArMan\\Desktop\\eclipse-workspace\\CSE215_Project_Assignment\\src\\EmployeeWithFile\\Files\\employees.txt";
            FileInputStream fileInputStream = new FileInputStream(pathToReadFrom);
            Scanner input = new Scanner(fileInputStream);
            for (int i = 0; i < personSize; i++) {
                String name = input.next()+" "+input.next();
                String gender = input.next();
                String nid = input.next();
                String tin = input.next();
                double mincome = input.nextDouble();
                input.nextLine();
                f[i] = new Faculty(name, gender, nid, tin, mincome);
            }
            input.close();
        } catch (Exception e2) {
            e2.printStackTrace();
        }

    }

    public static void toFile() {
        try {
            String path2 = "C:\\Users\\ArMan\\Desktop\\eclipse-workspace\\CSE215_Project_Assignment\\src\\EmployeeWithFile\\Files\\employeesTaxReport.txt";
            FileWriter write2 = new FileWriter(path2, true);
            for (int i = 0; i < noOfFaculties() ; ++i) {
                write2.write("Taxpayer Name: " + f[i].getName() +  "\t|\tTax Amount: " + f[i].getIncomeTax() + " tk\n" );
            }
            write2.close();
        } catch (Exception e1) {
            e1.printStackTrace();
        }

    }

    public static int noOfFaculties() {
        String path1 = "C:\\Users\\ArMan\\Desktop\\eclipse-workspace\\CSE215_Project_Assignment\\src\\EmployeeWithFile\\Files\\employees.txt";
        int count = 0;
        try {
            FileReader fr = new FileReader(path1);
            try {
                Scanner sc = new Scanner(fr);
                while (sc.hasNextLine()) {
                    sc.nextLine();
                    count++;
                }
                sc.close();
            } catch (Exception e4) {
                e4.printStackTrace();
            }
            fr.close();
        } catch (Exception e3) {
            e3.printStackTrace();
        }

        return count;

    }

    public static void main(String arg[]) {
        loadFile();
        toFile();
    }
}
