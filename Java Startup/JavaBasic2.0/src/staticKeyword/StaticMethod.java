package staticKeyword;

public class StaticMethod {
	void display1() {
		System.out.println("I am non static method");
	}
	static void display2() {
//		display1();  //do not work,non static
		System.out.println("I am static method");
	}
}
