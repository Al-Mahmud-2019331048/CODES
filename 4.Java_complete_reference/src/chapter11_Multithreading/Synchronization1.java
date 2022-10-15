package chapter11_Multithreading;
/**
 *
 * @author Hp
 */
class Callme{
//    synchronized void call(String msg){
    void call(String msg){
        System.out.print("["+msg);
        
        try{
            Thread.sleep(1000);
        }catch(InterruptedException e){
            
        }
        System.out.println("]");
    }
}
public class Synchronization1 implements Runnable{
    String msg;
    Callme target;
    
    Thread t;
    
    public Synchronization1(Callme targ,String s){
        target=targ;
        msg=s;
        t=new Thread(this);
    }
    
    public void run(){
        //synchronized block
        synchronized(target){
        target.call(msg);
        }
    }
}


class Synchronization1_test{
    public static void main(String[] args) {
        Callme target= new Callme();
        
        Synchronization1 ob1=new Synchronization1(target,"Hello");
        Synchronization1 ob2=new Synchronization1(target,"Synchronized");
        Synchronization1 ob3=new Synchronization1(target,"World");
        
        ob1.t.start();
        ob2.t.start();
        ob3.t.start();
        
        //wait for threads to join
        try{
            ob1.t.join();
            ob2.t.join();
            ob3.t.join();
        }catch(InterruptedException e){
            
        }
    }
}