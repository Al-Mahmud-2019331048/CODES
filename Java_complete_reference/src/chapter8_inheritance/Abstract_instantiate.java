/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter8_inheritance;

/**
 *
 * @author BM Mahmud
 */
public class Abstract_instantiate {
    
}

abstract class my {
    abstract void foo();
    public void mymethod() {
        System.out.println("Abstract");
    }
    static void sta(){
        
    }
}

class poly {
    public static void main(String a[]) {
        my m = new my() {
            @Override
            void foo() {
                
            }
        };
        m.mymethod();
    }
}