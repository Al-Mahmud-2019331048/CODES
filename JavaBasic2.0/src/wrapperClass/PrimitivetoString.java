package wrapperClass;

public class PrimitivetoString {
	public static void main(String[] args) {
		int i=100;
		//remember Integer(wrapper class)
		String s=Integer.toString(i);
		System.out.println("s="+s);
		
		double d=10.2555;
		String ss=Double.toString(d);
		System.out.println("ss="+ss);
		
		boolean b=true;
		String str=Boolean.toString(b);
		System.out.println("str="+str);
	}
}
