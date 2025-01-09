/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package CSE215LabTasks03;

/**
 *
 * @author ArMan
 */
public class GenerateARandomIntegerBetweenMinAndMaxRange02 {
    public static void main(String[] args){
       int n = (int)((Math.random()*(20-5+1))+5);
       System.out.println("Random integer: "+n);
       
       for(int i =0 ; i<=n; i++)
       {
         System.out.print(i + " ");
       }
    }
    
}
