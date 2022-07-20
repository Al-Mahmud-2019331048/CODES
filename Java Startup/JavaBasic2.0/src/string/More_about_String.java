package string;

public class More_about_String {
	public static void main(String[] args) {
		String country="  Bangladesh is my country";
		System.out.println(country);
		
		//get character at specific position
		char ch=country.charAt(0);
		System.out.println("ch= "+ch);
		
		//get the int value of specific positions char
		int val=country.codePointAt(0);
		System.out.println("Value = "+val);
		
		//get the position of firt occurance of a string
		int pos=country.indexOf("is");
		System.out.println("First position of g is : "+pos);
		
		//get the position of last occurance of a string
		int lpos=country.lastIndexOf('h');
		System.out.println("Last position of h is : "+lpos);
		
		//remove all space from first and last extra space
		String ss=country.trim();
		System.out.println(ss);
		
	}
}
