
package chapter7;

/**
 *
 * @author Hp
 */
//method that takes variable length argurmnts
public class Varangs {
    
    //varangs
    static void VarTest(int v[]){
        System.out.println("The number of arguments is "+v.length);
        
        for(int x:v)
            System.out.println(x+" ");
        System.out.println("");
    }
    
    //another varangs method
    static void Varan(int ... a){
        System.out.println("The number of arguments is "+a.length);
        
        for(int x:a)
            System.out.println(x+" ");
        System.out.println("");
    }
    
    static void Varan(boolean ... a){
        System.out.println("The number of arguments is "+a.length);
        
        for(boolean x:a)
            System.out.println(x+" ");
        System.out.println("");
    }
    
    
    //overloading
    static void Varan(String msg,double d,int ... a){  //variable length must be the last parameter
        System.out.println("The number of arguments is "+a.length);
        
        for(int x:a)
            System.out.println(x+" ");
        System.out.println("");
    }
    
    
    //main method
    public static void main(String[] args) {
        int n1[]={1,2,3,4,5};
        int n2[]={10,20,30,40,50,60,70,80};
        int n3[]={ };
        
        VarTest(n1);
        VarTest(n2);
        VarTest(n3);
        
        Varan(n1);
        Varan(n3);
        
//        Varan();  //error, cz Varan(boolean .. a) & Varan(int ... a) both are correct ,so Ambiguous
      
    }
}
