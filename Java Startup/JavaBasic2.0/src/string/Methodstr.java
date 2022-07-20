package string;

public class Methodstr {
	public static void main(String[] args) {
		String s1="Abdulla Al Mahmud";
		String s2=" Mugdo";
		
		//adding two atring
		String fullname=s1+s2;
		System.out.println("Full name: "+fullname);
		System.out.println("Full name: "+fullname+48);
		
		//concatanation
		String s3=s1.concat(s2);
		System.out.println(s3);
		
		//lower to uppercase
		String upper=s3.toUpperCase();
		System.out.println("Upper Name : "+upper);
		
		//upper to lowercase
		String lower=s3.toLowerCase();
		System.out.println("Lower Name : "+lower);
		
		//starts with the string?
		boolean b=s1.startsWith("Abd");
		System.out.println(b);
		
		//ends with the string?
		boolean last=s1.startsWith("mah");
		System.out.println(last);
		
		//string array
		String[] names= {"Mahmud","Afnan","Sakib"};
		for(String x: names)
			System.out.println(x);
		
		
	}
}
