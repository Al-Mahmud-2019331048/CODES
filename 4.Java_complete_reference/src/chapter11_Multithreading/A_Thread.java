/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter11_Multithreading;

/**
 *
 * @author BM Mahmud
 */
public class A_Thread implements Runnable {

    @Override
    public void run() {
        try {
            for (int i = 0; i < 6; i++) {
                System.out.println(i+" "+Thread.currentThread().getName());
                Thread.sleep(500);
            }
        }catch(InterruptedException e){
            System.out.println(e);
        }
    }
}

class Aaa{
    public static void main(String[] args) {
        A_Thread t=new A_Thread();
        Thread cur = new Thread(t);
        
        cur.start();
        
        //main thread
        try {
            for (int i = 0; i < 6; i++) {
                System.out.println(i+" "+Thread.currentThread().getName());
                Thread.sleep(1000);
            }
        }catch(InterruptedException e){
            System.out.println(e);
        }
        
    }
}
