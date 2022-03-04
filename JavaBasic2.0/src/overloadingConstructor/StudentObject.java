package overloadingConstructor;

public class StudentObject {
	public static void main(String[] args) {
		Student student1=new Student();
		student1.display();
		Student student2=new Student("Al Mahmud","567867");
		student2.display();
		Student student3=new Student("Naznin Shohely","567678","Female",26);
		student3.display();

	}
}
