package oopJAVA;

public class StudentObject {
	public static void main(String[] args) {
		
		//creating object
		Student student1=new Student();
		//initializing object values
		student1.name="Abdulla Al Mahmud";
		student1.id="2019331048";
		student1.age=22;
		
		//calling method
		student1.display();
		
		System.out.println();
		
		Student student2=new Student();
		student2.name="Naznin Shohely";
		student2.id="2019331101";
		student2.age=26;
		student2.display();
	}
}
