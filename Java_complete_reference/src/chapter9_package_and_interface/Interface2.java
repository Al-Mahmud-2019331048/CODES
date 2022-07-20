
package chapter9_package_and_interface;

interface Callback2{   
    void callback(int par);  // pubic method 
    
    int x=10;  //static final variable
}

abstract class Client1 implements Callback2{   
    
    //we must have to implements here all the methods of interface class
    //we didn't complete callback() method, so Client1 class must abstract
    
    //own method
    void myMethod(){
        System.out.println("This is my own method");
    }
}


public class Interface2 {
    public static void main(String[] args) {
        
        //we cannot instanciate interface class (Callback here)
//        Callback2 c = new Client1();  //Client1 is also abstract here
        
//        c.callback(91);
        
    }
}
