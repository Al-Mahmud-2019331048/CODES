package arrayList;

import java.util.*;

public class Method_arrayList {
	public static void main(String[] args) {
		ArrayList<Integer> num;
		num=new ArrayList<Integer>();
		
		num.add(100);
		num.add(-3);
		num.add(37);
		num.add(2,56);  //num[2]=56	
		
		//empty?
		System.out.println("Empty?\nAns:"+num.isEmpty());
		
		System.out.println(num);
		
		//delete all elements,like num.removeall()
		num.clear();
		System.out.println("After clear array list:\n"+num);
		
		//empty or not?
		//return boolean
		System.out.println("Empty?\nAns:"+num.isEmpty());
				
		num.add(100);
		num.add(-3);
		num.add(40);
		num.add(23);
		num.add(30);
		//search for a elements exists?
		//return boolean
		boolean exist=num.contains(-3);
		System.out.println("-3 is in the array list? \nAns:"+exist);
		
		//index of an element
		//return -1 if the element is not in the array list
		int pos=num.indexOf(-3);
		System.out.println("Position of -3 is : "+pos);
		System.out.println();
		System.out.println("Position of 50 is : "+num.indexOf(50));
		System.out.println();
		System.out.println(num);
		
		//replace an elements at a position
		num.set(1,5);
		System.out.println(num);
		
		//return value of the position
		int x=num.get(0);
		System.out.println("num[0] = "+x);
		System.out.println();
		
		
	}
}
