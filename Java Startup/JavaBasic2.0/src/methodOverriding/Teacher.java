package methodOverriding;

//declaring a method in subclass which is already in syperclass

public class Teacher extends Person {
	//name,age,display()
	String qualification;
	
	@Override
	void display() {
		System.out.println("Name: "+name);
		System.out.println("Age: "+age);
		System.out.println("Qualification: "+qualification);
	}
	
}
