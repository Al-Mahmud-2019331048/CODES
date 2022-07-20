package polymorhism;

public class Test {
	public static void main(String[] args) {
		
		Person p=new Person();   //superclass
		Teacher t= new Teacher();  //subclass
		Student s=new Student();  //subclass
		
		//general
		p.display();
		t.display();
		s.display();
		
		//run time polymorphism/dynamic
		p=new Teacher();  //superclass -> subclass
		p.display();  //Teacher er object
		
		p=new Student();
		p.display();  //Student er object
	}
}
