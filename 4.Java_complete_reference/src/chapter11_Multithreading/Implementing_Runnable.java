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
public class Implementing_Runnable implements Runnable{
    Thread t;
    
    Implementing_Runnable(){
        t= new Thread(this, "My Thread");
        System.out.println("Child thread: "+t);
    }
    
    @Override
    public void run(){
        for(int i=1;i<=5;i++){
            try {
                System.out.println("Child thread : "+i);
                Thread.sleep(500);
            } catch (InterruptedException ex) {
                System.out.println("Child interrupted");
            }
        }
        
        System.out.println("Exiting child thraead");
    }
}


class Implementing_RunnableTest{
    public static void main(String[] args) {
        Implementing_Runnable nt=new Implementing_Runnable();
        
        nt.t.start();
        
        for(int i=1;i<=5;i++){ 
            try {
                System.out.println("Main thread : "+i);
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
                System.out.println("Main thread interrupted");
            }
        }
        
        System.out.println("Exiting main thread");
    }
}