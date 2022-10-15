/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter10_Exception_Handling;

/**
 *
 * @author BM Mahmud
 */
public class TryCatch4_nested {
    public static void main(String[] args) {
        try{
            int a=0,c=4;
            c/=a;
            try{
                int z[]={2,4};
                z[10]=10;
            }catch(Exception e){
                System.out.println("Inner: "+e);
            }
        }catch(ArithmeticException e){
            System.out.println("Outer: "+e);
        }
        
        
        
    }
}
