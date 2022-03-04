package oopJAVA;

public class StaticBlock {
	static int id;
	static String name;
	
	static {   //static block,initializes static values
		System.out.println("Static block");
		id=101;
		name="Mahmud";
	}
	
	static void display() {
		System.out.println("ID: "+id);
		System.out.println("Name: "+name);
	}
	
	
	//main in same class where class created
	public static void main(String[] args) {
		System.out.println("Main Method");
		StaticBlock.display();
	}
	
}
