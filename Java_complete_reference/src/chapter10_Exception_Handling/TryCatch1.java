/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter10_Exception_Handling;

/**
 *
 * @author Hp
*/

public class TryCatch1 {
    public static void main(String[] args) {
        int a,i;
        
        try{
            i=0;  //i=5
            a=40/i;
            System.out.println(a);
            System.out.println("In try!");
        }catch(ArithmeticException e){
            System.out.println("Divide by zero");
        }
        
        System.out.println("After catch statement");
    }
}
