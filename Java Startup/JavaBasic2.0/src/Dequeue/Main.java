package Dequeue;

public class Main {
	public static void main(String[] args) {
		Dequeue Q=new Dequeue();
		
		System.out.println(Q.Empty());
		
		Q.pushBack(10);
		Q.pushFront(12);
		
		System.out.println(Q.Front());
		
		System.out.println(Q.Empty());
		
		System.out.println(Q.popBack());
		
		System.out.println(Q.Front());
		
		System.out.println(Q.popFront());
		
		System.out.println(Q.popFront());
		
		System.out.println(Q.Empty());
		
		System.out.println(Q.Front());
		
	}
	
	
	
}
