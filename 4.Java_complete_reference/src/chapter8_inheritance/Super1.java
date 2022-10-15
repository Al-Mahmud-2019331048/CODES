/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter8_inheritance;

/**
 *
 * @author BM Mahmud
 */
public class Super1 {
    Super1(){
        System.out.println("1");
    }
}

class Sub1 extends Super1{
    Sub1(){
        System.out.println("2");
    }
}

class Sub2 extends Sub1{
    Sub2(){
        System.out.println("3");
    }
    
    Sub2(int x){
//        super;
        System.out.println("3");
    }
    
    public static void main(String[] args) {
        Sub2 x=new Sub2();
        
        
    }
    
}
