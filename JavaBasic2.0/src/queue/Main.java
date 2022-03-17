package queue;

//import queue.Queue;

public class Main {
	public static void main(String[] args) {
		Queue Q=new Queue();
		
		System.out.println(Q.Empty());
		
		Q.push(10);
		Q.push(12);
		
		System.out.println(Q.Front());
		
		System.out.println(Q.Empty());
		
		System.out.println(Q.pop());
		
		System.out.println(Q.Front());
		
		System.out.println(Q.pop());
		
		System.out.println(Q.pop());
		
		System.out.println(Q.Empty());
		
		System.out.println(Q.Front());
		
	}
	
	
	
}
