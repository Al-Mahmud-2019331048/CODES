/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter14_Generics;

/**
 *
 * @author BM Mahmud
 */

//Here T is a type of parameter that will be replaced by a real type when an object of Gen is created
class Gen<T> {
    T ob; 
    
    //constructor
    //pass a reference to an object of type T
    Gen(T o){
        ob=o;
    }
    
    T getob(){
        return ob;
    }
    
    void showtype(){
        System.out.println("Type of T is "+ob.getClass().getName());
    }
}

class GenDemo{
    public static void main(String[] args) {
        
        //create a Gen reference for Integers
        Gen<Integer>ib;
        
        ib=new Gen<Integer>(88);
         ib.showtype();
         
         int v=ib.getob();
         System.out.println(v);
         
         
         //create a Gen object for Strings
         Gen<String> str= new Gen<String> ("Generics test");
         
         str.showtype();
         
         String s=str.getob();
         System.out.println(s);
    }
}
