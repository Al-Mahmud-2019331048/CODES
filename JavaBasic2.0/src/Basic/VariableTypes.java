package Basic;

public class VariableTypes {
	String name;
	int id;
	static String s;
	
	//constructor
	VariableTypes(String n,int i){
		name=n;
		id=i;
		//we cannot use s here, as s is a static variable
	}

}

/*
Variable: 3 types
Local: decleared inside the method,constructor or block
Instance: declaed in a class but outside the method & non static
Static/Class: declared as a static variable but not asa a local
static int;

*/