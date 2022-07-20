package Basic;

public class Person {
	String name;
	int age;
	String sex;
	
	//constructor
	Person(String name,int age){
		//local variable=instance variable
		this.name=name;
		this.age=age;
	}
	
	Person(String name,int age,String sex){
		//this.name=name,this.age=age
		this(name,age);
		this.sex=sex;
	}
	
	void display() {
		System.out.println("Name:"+name);
		System.out.println("Age: "+age);
		System.out.println("Sex: "+sex);
	}
	
	public static void main(String[] args) {
		
		Person p1=new Person("Mahmud",24);
		p1.display();
		
		Person p2=new Person("Anis",37,"Male");
		p2.display();
	}
}

	
