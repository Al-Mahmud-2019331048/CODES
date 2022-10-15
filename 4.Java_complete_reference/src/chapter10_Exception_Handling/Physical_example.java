/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter10_Exception_Handling;

import java.util.Scanner;

/**
 *
 * @author Hp
 */
public class Physical_example {
    public static void main(String[] args) {
        while(true){
            try{
                int num1,num2;
            Scanner input = new Scanner(System.in);
            System.out.print("Please enter num1:");
            num1=input.nextInt();
            System.out.print("Please enter num2:");
            num2=input.nextInt();
            
            System.out.println(num1+"/"+num2+"="+num1/num2);
            }catch(Exception e){
                System.out.println("Exception: "+e);
                System.out.println("You must enter integer. Try again");
            }
        }
                    
    }
}
