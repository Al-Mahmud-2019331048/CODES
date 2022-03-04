package encapsulationOOP;

public class EncapsulationDemoTest {
	public static void main(String[] args) {
		EncaptulationDemo ob1=new EncaptulationDemo();
		
		ob1.setName("Mahmud",21);
		
		//using private keyword
		System.out.println("Name: "+ob1.getName());
		System.out.println("Age: "+ob1.getAge());
	}
}
