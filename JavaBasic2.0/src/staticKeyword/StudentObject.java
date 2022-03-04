package staticKeyword;

public class StudentObject {
	public static void main(String[] args) {
		
		//for using non static variable create object
		Student s1=new Student();
		System.out.println(s1.uniName);
		
		
		//tag is a static variable, so we don't need to create object
		//just class_name.variable_name
		System.out.println(Student.tag);
		
	}
}
