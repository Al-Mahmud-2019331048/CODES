package overloadingConstructor;

public class MethodOverloading {
	
	//polymorphism
	//method name could be same
	//but parameter list must be different
	void add(int a,int b) {
		System.out.println(a+b);
	}
	
	void add(double a,double b) {
		System.out.println(a+b);
	}
	
	void add(double a,int b) {
		System.out.println(a+b);
	}
	
	void add(int a,int b,int c) {
		System.out.println(a+b+c);
	}
	void add() {
		System.out.println("Nothing to ADD");
	}
	
	public static void main(String[] args) {
		MethodOverloading o1= new MethodOverloading();
		
		o1.add(2,4);
		o1.add(2.5,4);
		o1.add(2.5, 5.60);
		o1.add(2,5,6);
		o1.add();
	}
}
