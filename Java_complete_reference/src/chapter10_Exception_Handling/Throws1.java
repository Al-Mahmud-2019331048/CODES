
//press shift+f6 to run

package chapter10_Exception_Handling;

/**
 *
 * @author Hp
 */
public class Throws1 {
    //throwing from a method we have to specify exception class first
    static void throwOne() throws IllegalAccessException{
        System.out.println("Inside throwOne");
        throw new IllegalAccessException("demo");
//        throw new NullPointerException("Hello");
    }
    
    
    public static void main(String[] args) {
        
        try{
            throwOne();
        }catch(IllegalAccessException e){
            System.out.println("Caught: "+e);
        }
        
    }
}
