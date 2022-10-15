/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter10_Exception_Handling;

/**
 *
 * @author Hp
 */
public class Finally1 {
    
    static void procA(){
        try{
            System.out.println("Inside procA");
            throw new RuntimeException("Demo");
        } finally{
            System.out.println("procA's finally");
        }
    }
    
    static void procB(){
        try{
            System.out.println("Inside procB");
            int x=4,y=0;
            x/=y;
            return;
        } 
        catch(Exception e){
            System.out.println("In b: "+e);
        }finally{
            System.out.println("procb's finally, Surely executed!");
        }
    }
    
    static void procC(){
        try{
            System.out.println("Inside procC");
        } finally{
            System.out.println("procC's finally");
        }
    }
    
    public static void main(String[] args) {
        try{
            procA();
        }catch(Exception e){
            System.out.println("Exception Caught");
        }
        
        procB();
        procC();
    }
}
