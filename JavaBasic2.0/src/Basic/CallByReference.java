package Basic;

public class CallByReference {
	String name;
	void change(CallByReference r2) {
		r2.name="Mugdo";
	}
	
	public static void main(String[] args) {
		CallByReference r1=new CallByReference();
		r1.name="Mahmud";
		
		System.out.println("Before calling, name="+r1.name);
		r1.change(r1);
		System.out.println("After calling, name="+r1.name);
		
	}
}
