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
public class Q {

    int n;

    boolean valueset = false;

    synchronized int get() {
        while (!valueset) {
            try {
                wait();
            } catch (InterruptedException ex) {

            }
        }
        System.out.println("Got: " + n);
        valueset = false;
        notify();
        return n;
    }

    synchronized void put(int n) {
        while (valueset) {
            try {
                wait();
            } catch (InterruptedException ex) {

            }
        }
        this.n = n;
        valueset=true;
        System.out.println("Put: " + n);
        notify();
    }
}

class Producer implements Runnable {

    Q q;
    Thread t;

    Producer(Q q) {
        this.q = q;
        t = new Thread(this, "Producer");
    }

    @Override
    public void run() {
        int i = 0;
        while (true) {
            q.put(i++);
        }
    }
}

class Consumer implements Runnable {

    Q q;
    Thread t;

    Consumer(Q q) {
        this.q = q;
        t = new Thread(this, "Consumer");
    }

    @Override
    public void run() {
        while (true) {
            q.get();
        }
    }
}

class PC {

    public static void main(String[] args) {
        Q q = new Q();
        Producer p = new Producer(q);
        Consumer c = new Consumer(q);

        //start the threads
        p.t.start();
        c.t.start();
        
        System.out.println("Press control+c to stop the loop");
    }

}
