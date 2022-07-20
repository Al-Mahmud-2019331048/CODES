package Basic;

public class ReturningObject {
	public static void main(String[] args) {
		
		//creating object
		ReturningValue ob1=new ReturningValue();
		int x=7; 
		int y=ob1.square(x);
		System.out.println(y);
		
		ReturningValue ob2=new ReturningValue();
		x=10; 
		y=ob2.square(x);
		System.out.println(y);
		
		ReturningValue ob3=new ReturningValue();
		x=11; 
		y=ob3.cube(x);
		System.out.println(y);
	}
}
