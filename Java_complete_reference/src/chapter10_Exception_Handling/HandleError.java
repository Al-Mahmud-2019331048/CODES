/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter10_Exception_Handling;

/**
 *
 * @author Hp
 */

import java.util.Random;
    
public class HandleError {
    public static void main(String[] args) {
        int a,b,c;
        Random r=new Random();
        
        for(int i=0;i<30;i++){
            try{
                b=r.nextInt();
                c=r.nextInt();
                a= 12345/(b/c);
            }catch(ArithmeticException e){
                System.out.println(e);
//                System.out.println("Division by zero");
                a=0;
            }
            System.out.println("a: "+a);
    }
    }
        
 
      
}
