package chapter10_Exception_Handling;

/**
 *
 * @author Hp
 */
public class TryCatch2_multipleCatch {
    public static void main(String[] args) {
        try{
            int a=args.length;  //0
            System.out.println("a= "+a);
            int b=42/a;
            int c[]={1};
            c[10]=48;
        }catch(ArithmeticException e){
            System.out.println(e);
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println(e);
        }
        
        //we can simply write catch(Exception e) , cz it is superclass
        
        System.out.println("After catch!");
    }
}
