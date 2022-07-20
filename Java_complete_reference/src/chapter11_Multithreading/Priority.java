/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter11_Multithreading;

/**
 *
 * @author Hp
 */
public class Priority implements Runnable {

    int number;
    Thread t = new Thread();

    Priority(int n) {
        number = n;
    }

    @Override
    public void run() {

        for (int i = 0; i < 5; i++) {
            System.out.println("i from thread " + number);
        }
    }

}

class PriorityTest {

    public static void main(String[] args) {
        for (int i = 0; i < 4; i++) {
            Priority th=new Priority(i);
            if(i==0) th.t.setPriority(1);
            if(i==1) th.t.setPriority(10);
            if(i==2)  th.t.setPriority(5);
            th.t.start();
        }

    }

}
