/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter9_package_and_interface;

/**
 *
 * @author Hp
 */

interface Ax{
    void func1();
    void func2();
}

interface Bx extends Ax{  //an interface can extends another
    void func3();
}

class MyC implements Bx{
    @Override
    public void func1(){
        System.out.println("Func 1");
    }
    
    @Override
    public void func2(){
        System.out.println("Func 2");
    }
    @Override
    public void func3(){
        System.out.println("Func 3");
    }
}

public class Interface4 {
    public static void main(String[] args) {
        MyC ob = new MyC();
        
        ob.func1();
        ob.func2();
        ob.func3();
    }
}
