package wrapperClass;

public class WrapperClassDemo {
	public static void main(String[] args) {
		//autoboxing- primitive to object class
		int x=30;
		Integer y=Integer.valueOf(x); 
		//Or,Integer y=x;
		System.out.println("y="+y);
		Integer z=x;
		System.out.println("z="+z);
		
		double d=10.20;
		Double e=Double.valueOf(d);
		System.out.println("e="+e);
		
		//unboxing- object to primitive data type
		
		@SuppressWarnings("removal")
		Double D= new Double (10.25);
		System.out.println("D="+D);
		
		double f=D.doubleValue();  //converting
		//Or,f=D
		System.out.println("f="+f);
	}
}
