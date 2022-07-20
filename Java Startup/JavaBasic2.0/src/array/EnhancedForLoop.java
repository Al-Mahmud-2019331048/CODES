package array;

import java.util.*;

public class EnhancedForLoop {
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		String names[]=new String[5];
		
		String name[]= {"Mahmud","Anis","Saikat"};
		
//		String s;
		System.out.println("Please Enter five line:");
		for(int i=0;i<names.length;i++) {
			names[i]=input.nextLine();
		}
		
		
		for(int i=0;i<names.length;i++) {
			System.out.println(names[i]);
		}
		
		//for each loop
		for(String x:  name) {
			System.out.println(x);
		}
		
		
		input.close();
	}
}
