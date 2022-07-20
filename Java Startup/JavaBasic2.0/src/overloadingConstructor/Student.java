package overloadingConstructor;

public class Student {
	String name,id,gender;
	int age;
	
	//overloading constructor
	//parameter list different
	
	Student(){
		System.out.println("No Information");
		System.out.println();
	}
	
	Student(String s1,String s2){
		name=s1;
		id=s2;
	}
	
	Student(String s1, String s2,String s3,int n){
		name=s1;
		id=s2;
		gender=s3;
		age=n;
	}
	void display() {
		System.out.println("Name: "+name);
		System.out.println("ID: "+id);
		System.out.println("Gender: "+gender);
		System.out.println("Age: "+age);
		System.out.println();
	}
}
