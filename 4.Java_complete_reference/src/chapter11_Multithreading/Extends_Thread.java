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
public class Extends_Thread extends Thread{
    
    Extends_Thread(){
        super("My Thread");   //constructor - Thread(threadName);
        System.out.println("Child thread : "+this);
    }
    
    @Override
    public void run(){
        for(int i=5;i>0;i--){
            try {
                System.out.println("Child thread : "+i);
                Thread.sleep(500);
            } catch (InterruptedException ex) {
                System.out.println("Child thraed interrupetd");
            }
        }
        System.out.println("Exiting child thraed");
    }
}

class Extends_ThreadTest{
    public static void main(String[] args) {
        Extends_Thread t=new Extends_Thread();
        
        t.start();
        
        for(int i=0;i<5;i++){
            try {
                System.out.println("Main thread: "+i);
                Thread.sleep(500);
            } catch (InterruptedException ex) {
                System.out.println("Main thread interrupted");
            }
        }
        
        System.out.println("Exiting main thread");
    }
}