/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practice;

/* You can write a single generic method declaration that can be called 
   with arguments of different types. Based on the types of the arguments 
   passed to the generic method, the compiler handles each method call 
   appropriately. Following are the rules to define Generic Methods −

1. All generic method declarations have a type parameter section delimited 
   by angle brackets (< and >) that precedes the method's return type ( < E > 
   in the next example).

2. Each type parameter section contains one or more type parameters separated 
   by commas. A type parameter, also known as a type variable, is an identifier 
   that specifies a generic type name.

3. The type parameters can be used to declare the return type and act as 
   placeholders for the types of the arguments passed to the generic method, 
  which are known as actual type arguments.

4. A generic method's body is declared like that of any other method. Note that 
   type parameters can represent only reference types, not primitive types 
   (like int, double and char).
*/

public class GenericMethodDemo {
   // When a class does not have parameterize type, but you want to 
   // have a parameterize type method generic method printArray
   public static <E> void printArray(E[] inputArray) {
      // Display array elements
      for(E element : inputArray) {
         System.out.printf("%s ", element);
      }
      System.out.println();
   }

   public static void main(String[] args) {
      // Create arrays of Double and Character      
      Double[] doubleArray = { 1.1, 2.2, 3.3, 4.4 };
      Character[] charArray = { 'H', 'E', 'L', 'L', 'O' };

      System.out.println("\nArray doubleArray contains:");
      printArray(doubleArray);   // pass a Double array

      System.out.println("\nArray characterArray contains:");
      printArray(charArray);   // pass a Character array
   }
}
