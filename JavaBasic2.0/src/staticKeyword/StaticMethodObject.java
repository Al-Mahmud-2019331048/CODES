package staticKeyword;

public class StaticMethodObject {
	public static void main(String[] args) {
		
		//create a object for non static method
		StaticMethod s1=new StaticMethod();
		s1.display1();
		
		//don't need to create object
		//just class_name.method_name
		//static method cannot acces non static things
		StaticMethod.display2();
		
	}
}
