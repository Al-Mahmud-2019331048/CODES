package encapsulationOOP;

public class StudentObject {
	public static void main(String[] args) {
		Student s1=new Student();
		
		s1.setName("Mahmud");
		System.out.println("Name: "+s1.getName());
		s1.setAge(18);
		System.out.println("Age: "+s1.getAge());
	}
}
