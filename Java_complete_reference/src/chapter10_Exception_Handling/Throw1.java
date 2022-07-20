package chapter10_Exception_Handling;

/**
 *
 * @author Hp
 */
public class Throw1 {
    static void demoproc(){
        try{
            throw new NullPointerException("Hello");  //throw an exception explicitly
        }catch(NullPointerException e){
            System.out.println("Caught inside demoproc");
            System.out.println(e);
            throw e;  //rethrow the exception
        }
    }
    
    public static void main(String[] args) {
        try{
//            int b=10;
//            int c = b/0;
            
            demoproc();
        } catch(NullPointerException e){
            System.out.println("Recaught: "+e);
        }
    }
}
