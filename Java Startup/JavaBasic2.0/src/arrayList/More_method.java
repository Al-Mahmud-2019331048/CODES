package arrayList;

import java.util.*;

public class More_method {
	public static void main(String[] args) {
		ArrayList<Integer> num1=new ArrayList<Integer>();
		ArrayList<Integer> num2=new ArrayList<Integer>();
		ArrayList<Integer> num3=new ArrayList<Integer>();
		
		num1.add(10);
		num1.add(20);
		num1.add(30);
		num1.add(40);
		System.out.println("num1="+num1);
		
		num2.add(1);
		num2.add(2);
		num2.add(3);
		num2.add(4);
		System.out.println("num2="+num2);
		
		//copy all elemets
		num3.addAll(num1);
		System.out.println("num3="+num3);
		
		//equality check between two array list
		boolean res=num1.equals(num2);
		System.out.println("num1==num2 ?\nAns:"+res);
		
		System.out.println("num1==num3 ?\nAns:"+num1.equals(num3));
		
	}
}
