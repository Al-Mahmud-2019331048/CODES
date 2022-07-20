package queue;

//import Dequeue.LinkedList;
//import Dequeue.node;

public class Queue {
	LinkedList Q= new LinkedList();
	
	void push(int val) {
		Q.addBack(val);
	}
	
	int pop() {
		return Q.popFront();
	}
	
	boolean Empty() {
		return Q.Empty();
	}
	
	int Front() {
		return Q.Front();	}
	
}

class node{
	int val;
	node prev,next;
	
	node(int x){
		val=x;
		prev=next=null;
	}
}


class LinkedList{
	node front,rear;
	
	LinkedList(){
		front=rear=null;
	}
	
	void addFront(int x) {
		node n=new node(x);
		if(front==null) {
			front=rear=n;
			return;
		}
		else {
			front.prev=n;
			n.next=front;
			front=n;
		}
	}
	
	void addBack(int x) {
		node n=new node(x);
		if(front==null) {
			front=rear=n;
			return;
		}
		else {
			rear.next=n;
			n.prev=rear;
			rear=n;
		}
	}
	
	int popBack() {
		if(front==null || rear==null) {
			System.out.println("Underflow!");
			return Integer.MIN_VALUE;
		}
		else if(rear.prev==null) {
			int val=front.val;
			front=rear=null;
			return val;
		}
		int val=rear.val;
		rear=rear.prev;
		return val;
	}
	
	int popFront() {
		if(front==null || rear==null) {
			System.out.println("Underflow!");
			return Integer.MIN_VALUE;
		}
		else if(rear.prev==null) {
			int val=front.val;
			front=rear=null;
			return val;
		}
		int val=front.val;
		front=front.next;
		return val;
	}
	
	int Front() {
		if(front==null) return Integer.MIN_VALUE;
		return front.val;
	}
	
	boolean Empty() {
		return front==null;
	}
	
}