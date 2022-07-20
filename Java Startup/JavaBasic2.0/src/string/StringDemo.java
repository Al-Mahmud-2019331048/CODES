package string;

//import java.util.*;

public class StringDemo {
	public static void main(String[] args) {
		//declearing & initializing
		String s1="Abdulla Al Mahmud";
		String s2=new String("Abdulla Al Mahmud");
		//printing
		System.out.println("S1="+s1);
		System.out.println("S2="+s2);
		
		char s3[]= {'m','a','h','m','u','d'};
		System.out.println(s3);
		
		//length
		System.out.println("Length of s1="+s1.length());
		
		//equal?
		if(s1==s2)   //object compare kore not value
			System.out.println("Equal");
		else
			System.out.println("Not equal");
		//equal?
		if(s1.equals(s2))  //return boolean
			System.out.println("Equal");
		else
			System.out.println("Not equal");
		
		//equal? (ignore case)
		if(s1.equalsIgnoreCase(s2))
			System.out.println("Equal");
		else
			System.out.println("Not equal");
		
		//equal?
		if(s1.contains(s2))  //return boolean
			System.out.println("Equal");
		else
			System.out.println("Not equal");
		
		//contains the substr or not?
		boolean con=s1.contains("Mah");
		System.out.println(con);
		
		//empty?
		System.out.println("s1 empty?"+s1.isEmpty());
		
	}
}
