package wrapperClass;

public class StringtoPrimitive {
	public static void main(String[] args) {
		String s="32";
		
		//string to int
		//method 1
		int i=Integer.parseInt(s); 
		System.out.println("i="+i);
		//string to double
		double d=Double.parseDouble(s);
		System.out.println("d="+d);
		
		
		//method 2
		int x=Integer.valueOf(s);
		System.out.println("x="+x);
		double y=Double.valueOf(s);
		System.out.println("y="+y);
		
	
	}
}
