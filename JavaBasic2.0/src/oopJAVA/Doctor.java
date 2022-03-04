package oopJAVA;

public class Doctor {
	String name,id,service;
	int age;
	
	//constructor
	//Constructor name is same to class name
	//special type of method
	//no return type
	//automatically called & initializes an object
	//parameterized constructor
	Doctor(String s1,String s2,String s3,int n){
		name=s1;
		id=s2;
		service=s3;
		age=n;
	}
	
	//deafult constructor(no parameter)
	//automatically there is an default constructor in compiler
	Doctor(){
		System.out.println("Default Constructor");
	}
	
	void display() {
		System.out.println("Name: "+name);
		System.out.println("ID: "+id);
		System.out.println("Service: "+service);
		System.out.println("Age: "+age);
		
		System.out.println();
	}
}
