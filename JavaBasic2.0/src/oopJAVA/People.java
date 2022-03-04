package oopJAVA;

public class People {
	String name,nid;
	int age;
	
	void setInformatin(String s1,String s2,int n) {
		name=s1;
		nid=s2;
		age=n;
	}
	
	
	void display() {
		System.out.println("Name: "+name);
		System.out.println("NID: "+nid);
		System.out.println("Age: "+age);
		
		System.out.println();
	}
}
