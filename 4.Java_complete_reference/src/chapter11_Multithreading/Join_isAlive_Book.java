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
public class Join_isAlive_Book implements Runnable {

    String name;
    Thread t;
    Join_isAlive_Book(String name) {
        this.name=name;
        t = new Thread(this, name);
        System.out.println("New thread : " + t);
    }

    @Override
    public void run() {
        for (int i = 0; i < 5; i++) {
            try {
                System.out.println(name + ": " + i);
                Thread.sleep(1000);
            } catch (InterruptedException ex) {

            }

        }
        System.out.println(name + " exiting");
    }
}

class Join_Main {

    public static void main(String[] args) {

        Join_isAlive_Book th1 = new Join_isAlive_Book("One");
        Join_isAlive_Book th2 = new Join_isAlive_Book("Two");
        Join_isAlive_Book th3 = new Join_isAlive_Book("Three");
        
        th1.t.start();
        th2.t.start();
        th3.t.start();
        
        System.out.println("Thread one is alive? "+th1.t.isAlive());
        System.out.println("Thread two is alive? "+th2.t.isAlive());
        System.out.println("Thread three is alive? "+th3.t.isAlive());
        
        try {
//            th1.t.start();
            th1.t.join();
//            th2.t.start();
            th2.t.join();
//            th3.t.start();
            th3.t.join();
        } catch (InterruptedException ex) {
            Logger.getLogger(Join_Main.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        
        
        System.out.println("Thread one is alive? "+th1.t.isAlive());
        System.out.println("Thread two is alive? "+th2.t.isAlive());
        System.out.println("Thread three is alive? "+th3.t.isAlive());

    }
}
