package superKeyword;

public class Test {
	public static void main(String [] args) {
		B ob=new B();  //call the default constructor
		
		ob.displayint();  
		//A,x=10 orB,x=25? but B extends A
		//if super.x=10, else x=25
		
		ob.display();
		
		
		
	}
}
