package staticKeyword;

public class StaticVariableDemo {
	String name;
	int id;
	static String uniName="SUST"; 
	
	//static variable er jonno memory te alada kore jaiga ney na
	//bivinno object er jonno eta just refer kore

	StaticVariableDemo(String s,int n){
		name=s;
		id=n;
	}
	void display(){
		System.out.println("Name: "+name);
		System.out.println("ID: "+id);
		System.out.println("University Name: "+uniName);
	}
	
}


//memory management (save memory)