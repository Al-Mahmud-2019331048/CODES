package encapsulationOOP;

public class EncaptulationDemo {
	
	private int age;
	private String name;
	
	void display() {
		System.out.println("Name: "+name);
		System.out.println("Age: "+age);
	}
	
	//setting private variable
	void setName(String s,int n) {
		name=s;
		age=n;
	}
	
	//getting private variable(name) for accessing from outer class
	String getName() {
		return name;
	}
	//getting private variable(age) for accesiing from outer class
	int getAge() {
		return age;
	}
	
}


//packaging variables and methods into a single units
//protecting data by declaring them as private