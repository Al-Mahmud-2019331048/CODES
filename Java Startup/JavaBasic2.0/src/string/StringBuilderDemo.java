package string;

public class StringBuilderDemo {
	public static void main(String[] args) {
		StringBuilder str=new StringBuilder("Mahmud");
		System.out.println("Str="+str);  
		
		//appending any data type
		str.append(" Mugdo");
		System.out.println("Str="+str);
		
		str.append(48);
		System.out.println("Str="+str);
		
		str.append(true);
		System.out.println("Str="+str);
		
		//reverse
		str.reverse();
		System.out.println("Str="+str);
		
		str.reverse();
		
		//delete selected portion
		str.delete(0, 5);
		System.out.println("Str="+str);
		
	}
}
