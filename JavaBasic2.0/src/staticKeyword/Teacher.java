package staticKeyword;

public class Teacher {
	static int count=0;
	//static na dile count barbe naa
	//static dile object er sathe relation na hoye class er sathe related thakbe
	//so, class call hoilei count barbe
	
	String name;
	int id;
	
	//constructor
	Teacher(){
		count++;
	}
	void totalStudent() {
		System.out.println("Total student: "+count);
	}
}
