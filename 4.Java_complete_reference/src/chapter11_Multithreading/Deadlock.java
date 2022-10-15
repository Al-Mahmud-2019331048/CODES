/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter11_Multithreading;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Hp
 */
class A{
    synchronized void foo(B b){
        String name=Thread.currentThread().getName();
        System.out.println(name+" entered A.foo");
        
        try {
            Thread.sleep(1000);
        } catch (InterruptedException ex) {
            System.out.println("A interrupted");
        }
        
        System.out.println(name +"trying to call B.last");
        b.last();
    }
    
    synchronized void last(){
        System.out.println("Inside A.last");
    }
}

class B{
    synchronized void bar(A a){
        String name=Thread.currentThread().getName();
        System.out.println(name+" entered B.bar");
        
        try {
            Thread.sleep(1000);
        } catch (InterruptedException ex) {
            System.out.println("B interrupted");
        }
        
        System.out.println(name+" trying to call A.last");
        a.last();
    }
    
    synchronized void last(){
        System.out.println("Inside A.last");
    }
}

public class Deadlock implements Runnable {
    
    A a=new A();
    B b=new B();
    
    Thread t;
    
    Deadlock(){
        Thread.currentThread().setName("Main thread");
        t=new Thread(this,"Racing thread");
    }
    
    void deadlockStart(){
        t.start();
        a.foo(b);  //get lock on a in this thread
        System.out.println("Back to main thread");
    }
    
    @Override
    public void run(){
        b.bar(a);  //get loct on b in other thread
        System.out.println("Back to the other thread");
    }
    
    
    public static void main(String[] args) {
        Deadlock dl=new Deadlock();
        
        dl.deadlockStart();
    }
}


//terminate- ctrl+shift+del