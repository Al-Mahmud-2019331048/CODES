package chapter12_Enum_autoBox_Unbox;

/**
 *
 * @author BM Mahmud
 */
public class Autobox2 {
    
    static int ff(Integer a){
        return a;   //auto unboxing to int
    }
    
    public static void main(String[] args) {
        //Autobixing - 100 passed in ff
        //Auto Unboxing - 100 return from ff
        //Autoboxing - 100 initializing in ib Object
        Integer ib= ff(100); 
        
        System.out.println(ib);
        
        ++ib;  //unbox, ++, autobox
        
        System.out.println(ib);
        
        int x= ib/2;
        System.out.println(x);
        
        Integer i1= 100;  //autobox
        Double d1=23.4;   //autobox;
        
        d1=d1+i1;   //unbox - sum - auto cast- auto box
        
        System.out.println(d1);
        
        Integer ii=1000;
        int i=ii.byteValue();
        System.out.println(i);
    }
}
