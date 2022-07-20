package chapter11_Multithreading;


/**
 *
 * @author Hp
 */
public class Main_thread {
    public static void main(String[] args) {
        Thread t=Thread.currentThread();  //this refer the main current thread
        
        System.out.println("Current thread : "+t);
        System.out.println(t.getName());  //returns just the name of the thread+
        System.out.println(t.getPriority());
        
        //changing thread name
        t.setName("My Thread");
        
        System.out.println("After change the name: "+t);
        
        //suspend a thread for a period of time
        for(int i=1;i<=5;i++){
            try {
                System.out.println(i+" "+t);
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
                
            }
        }
    }
}
