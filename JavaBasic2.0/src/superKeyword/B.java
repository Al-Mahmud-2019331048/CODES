package superKeyword;

public class B extends A {
	//x=10
	int x=25;
	
	//constructor
	B(){
		super();
		System.out.println("B constructor");
	}
	void displayint() {
		System.out.println(super.x);
	}
	
	void display() {
		super.display();
		System.out.println("Inside B class");
	}
}
