package inheritance;

//teacher inherits person

public class Teacher extends Person {
	//name,age,display1 from Person
	//getsex(),setsex()
	String qualification;

	
	void display2() {
		display1();  //display name,age
		System.out.println("Qualification: "+qualification);
	}
	
}
