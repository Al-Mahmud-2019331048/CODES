package inheritance;

public class TestClass {
	public static void main(String [] args) {
		
		Teacher t1=new Teacher();
		Person p1= new Person();
		t1.name="Al Mahmud";
		t1.age=24;
		t1.qualification="MSC in CSE";
		
		//t1.display1()
		t1.display2();
		t1.setSex("Male");
		System.out.println("Sex: "+t1.getSex());
		
		//instanceOf operator
		//extends or not
		System.out.println(t1 instanceof Person);
		System.out.println(t1 instanceof Teacher);
		System.out.println(p1 instanceof Teacher);
	}
}
