
package chapter11_Multithreading;

/**
 *
 * @author BM Mahmud
 */
public class B_Thread extends Thread{
    
    @Override
    public void run(){
        for(int i=1;i<6;i++){
            try{
                System.out.println(i+ " "+Thread.currentThread().getName());
                Thread.sleep(500);
                
            }catch(InterruptedException e){
                System.out.println(e);
            }
        }
    }
}

class Bbb{
    public static void main(String[] args) {
        B_Thread t=new B_Thread();
        
        t.start();
        
        for(int i=1;i<6;i++){
            try{
                System.out.println(i+ " "+Thread.currentThread().getName());
                Thread.sleep(1000);
                
            }catch(InterruptedException e){
                System.out.println(e);
            }
        }    
    }
}
