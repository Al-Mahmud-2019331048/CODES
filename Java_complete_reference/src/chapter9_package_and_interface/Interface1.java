/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter9_package_and_interface;

/**
 *
 * @author Hp
 */

interface Callback{   //we cannot instanciate this method
    void callback(int par);  // pubic static method 
    
    int x=10;  //static final variable
}

class Client implements Callback{   //implementing Callback's interface
    
    //we must have to implements here all the methods of interface class
    //must be public
    @Override
    public void callback(int p){   
        System.out.println("callback called with : "+p);
    }
    
    //own method
    void myMethod(){
        System.out.println("This is my own method");
    }
}

class Client2 implements Callback{
    
    //public must
    @Override
    public void callback(int p){
        System.out.println("Another version of callback");
        System.out.println("P squared is "+ (p*p));
    }
}
public class Interface1 {
    public static void main(String[] args) {
        
        //we cannot instanciate interface class (Callback here)
        Callback c = new Client();  //accessing implementations through interface reference
        c.callback(48);   //c refering Clint
        
        c=new Client2();
        c.callback(91);  //c now refering Clint2 ,runtime polymorphism
        
        //c.myMethod();  //Error! Interface reference variable has knowledge only of the methods of interface
    }
}
