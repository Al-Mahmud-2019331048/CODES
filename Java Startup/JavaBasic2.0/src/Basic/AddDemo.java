package Basic;

public class AddDemo {
	
	//add two variables
	void add(int a,int b) {
		System.out.println(a+b);
	}
	
	//add numbes of variables
	void add2(int ... num) {  //acts  like array
		int sum=0;
		for(int x : num)  sum+=x;
		System.out.println(sum);
	}
	
	
	//main function
	public static void main(String[] args) {
		AddDemo ob= new AddDemo();
		ob.add(5,8);
		ob.add2(2,5,20,25,34);
		ob.add2(2,-3,50,55,354,3,56,35);
		
		int a=-1;
		a=a>>>24;
		System.out.println("a: "+a);
	}
}
