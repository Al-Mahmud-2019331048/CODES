package Basic;

public class CallByValue {

	 void noChange(int x) {
		 x=20;
		 System.out.println("In function x="+x);
	 }
	 
	 
	 public static void main(String[] args) {
		 CallByValue cbv=new CallByValue();
		 int x=10;
		 cbv.noChange(x);
		 System.out.println("After calling CallByValue, x="+x);
		 
	 }
	
}

