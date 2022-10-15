package chapter7;

import chapter7.Outer.Inner;

@SuppressWarnings("unused")

//an inner class has acess all the members of outer class , but the reverse is not true

public class Outer {
	int outer_x=150;
        private int x;
	//y=100;
	//System.out.println(inner_x); //cannot accessable
	
	void func() {
		Inner inner = new Inner();
		inner.display();   //accessable inner class method by instantiate inner class
		inner.inner_x=10;  
//		System.out.println(inner_x);  //cannot accessable,Inner class variable
	}
	
        //final
	class Inner{
		int inner_x=100;  //local to Inner class
                //x=20;
                private int y;
//                Outer ou=new Outer();
		void display() {
			System.out.println("outer_x="+outer_x);
		}
	}
}

class TestInner{
	public static void main(String args[]) {
		Outer ou=new Outer();
		
		Outer.Inner i = ou.new Inner();
		
		i.inner_x=100;
		i.display();
		
		Outer outer=new Outer();
		outer.func();
	}
}
