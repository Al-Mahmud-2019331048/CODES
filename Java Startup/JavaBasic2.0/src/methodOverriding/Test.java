package methodOverriding;

public class Test {
	public static void main(String[] args) {
		Teacher t1=new Teacher();
		t1.name="Mahmud";
		t1.age=24;
		t1.qualification="BSC in CSE";
		
		t1.display();
		
		Person p1=new Person();
		p1.name="Anis";
		p1.age=27;
		
		p1.display();
	}
}
