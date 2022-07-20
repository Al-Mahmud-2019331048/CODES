/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter11_Multithreading;

/**
 *
 * @author Hp
 */
public class Join_isAlive implements Runnable {

    private int threadnumber;

    Join_isAlive(int threadnumber) {
        this.threadnumber = threadnumber;
    }

    @Override
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println(i + " from thread " + threadnumber);

            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {

            }
        }
    }
}

class Thread3Main {

    public static void main(String[] args) {
        for (int i = 0; i < 3; i++) {
            Join_isAlive mythread = new Join_isAlive(i);
            Thread myT = new Thread(mythread);
            myT.start();

            try {
                myT.join();  //finish first thread first
            } catch (InterruptedException e) {

            }
            System.out.println(myT.isAlive());

        }

    }
}
