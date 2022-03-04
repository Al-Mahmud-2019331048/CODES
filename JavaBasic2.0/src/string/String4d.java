package string;

public class String4d{
	public static void main(String[] args){
		String ss=" This is my country";
		
		//replace a string with another string
		String s1=ss.replace('i','j');
		System.out.println(ss);
		System.out.println(s1);
		
		//split a string
		//this method split a string array depending on space
		String s2[]=ss.split(" ");
		for(String x: s2){
			System.out.println(x);
		}
		
		//this method split a string array depending on i
		String s3[]=ss.split("i");
		for(String x: s3){
			System.out.println(x);
		}

	}		
}