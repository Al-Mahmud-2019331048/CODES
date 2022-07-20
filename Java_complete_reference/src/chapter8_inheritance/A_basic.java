/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter8_inheritance;

/**
 *
 * @author BM Mahmud
 */
public class A_basic {
    int i,j;
    
    void showij(){
        System.out.println("i & j: "+i+" "+j);
    }
}

class B_basic extends A_basic{
    int k;
    void showk(){
        System.out.println("k: "+k);
    }
    
    void sum(){
        System.out.println("i+j+k: "+(i+j+k));
    }
}

class Test_basic{
    public static void main(String[] args) {
        A_basic superob=new A_basic();
        B_basic subob=new B_basic();
        
        superob.i=10;
        superob.j=20;
        
        superob.showij();
        
        subob.i=10;
        subob.j=20;
        subob.k=30;
        
        subob.showij();
        subob.showk();
        
        subob.sum();
    }
}


