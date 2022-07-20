package string;

public class Palindrome {
	public static void main(String[] args) {
		String s1="madam";
		StringBuffer ss=new StringBuffer();
		String s2=ss.reverse().toString();
		System.out.println(s2);
		if(s1.equals(s2)==true)
			System.out.println("Palindrome");
		else
			System.out.println("Not plaindrome");
			
	}
}
