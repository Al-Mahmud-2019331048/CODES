/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter10_Exception_Handling;

/**
 *
 * @author Hp
 */
public class TryCatch3_Nested {
    static void ayhay(){
        try{
            int x[]={1,2};
            x[22]=2;
        }catch(Exception e){
            System.out.println("Method: "+e);
        }
    }
    public static void main(String[] args) {
        
        try{
            int a=args.length;  //a=0
            
            ayhay();
            
            int b=42/a;
            
            System.out.println("a= "+a);

            try{
                if(a==1) a/=(a-a);
                if(a==2){
                    int c[]={1};
                    c[48]=101;
                }
            }catch(ArrayIndexOutOfBoundsException e){
                System.out.println("Inner : "+e);
            }
        }catch(ArithmeticException e){
            System.out.println("Outer : " +e);
        }
        
    }
}
