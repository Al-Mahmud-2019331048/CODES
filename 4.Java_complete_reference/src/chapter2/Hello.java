package chapter2;

public class Hello{
	public static void main(String[] args) {
		System.out.println("Hello World");
		
		Example2 ob1=new Example2();
		ob1=null;
		System.out.println(ob1);
		
		Example2 ob2=new Example2();
		ob2.x=10;
		System.out.println(ob2.x);
                
                int z;  //no local value
//                System.out.println("Default value of z is: "+z);
                
                System.out.println("End of the program");
	}
}
