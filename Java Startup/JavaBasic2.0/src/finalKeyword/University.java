package finalKeyword;

//final class can not be extended
//final public class A
public class University {
	//constant, never change
	final String name="SUST";
	final int fee;  //blank final variable
	static final int dept;
	
	//must be initialized in static block
	static {
		dept=24;
	}
	
	//blank final variable must be initialized in constructor
	//constructor
	University(){
		fee=10000;
	}
	
	
	//can not override
	final void display() {
		System.out.println(name);
		System.out.println(fee);
		System.out.println(dept);
	}
}
