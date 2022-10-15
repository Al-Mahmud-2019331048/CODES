/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter11_Multithreading;

/**
 *
 * @author Hp
 */

public class MultiThread1 implements Runnable{
	private String name;
	Thread t;
	
       
    MultiThread1(String threadname){
            name=threadname;
            t=new Thread(this,name);  //this means the object of MultiThread1
            System.out.println("New thread : "+t);
	}

        @Override
        //must be overriden , cz Runnable is an interface (fully abstract)
        //mjst be public method
	public void run() {
            try {
                for(int i=0;i<5;i++) {
                    System.out.println(name+ ":" +i);
                    Thread.sleep(500);
                }
            }catch(InterruptedException e){
                    System.out.println(name+" interrupted");
            }
            System.out.println(name+ " Exiting");	
	}
}


class MultiThread1Test{
    public static void main(String[] args) {
        MultiThread1 t1=new MultiThread1("one");
        MultiThread1 t2=new MultiThread1("two");
        MultiThread1 t3=new MultiThread1("three");

        t1.t.start();
        t2.t.start();
        t3.t.start();
        
        
    }
}