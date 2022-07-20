package inner_class;

public class Outer {
	private int outerx=99;
	
	class Inner{
		
		private int x;
		
		Inner(int x){
			this.x=x;
		}
		Inner(){
			
		}
		
		void showx() {
			System.out.println(outerx+" "+x);  //we can use outer class variables in inner
		}
		
		int getx() {  //getter
			return x;
		}
		void setx(int x) {   //setter
			this.x=x;
		}
		
	}
	
	public void demo() {
		Inner inner = new Inner();
		inner.x=100;
		inner.showx();
	}
}

class Test{
	public static void main(String args[]) {
		
		Outer outer=new Outer();
		outer.demo();
		
		Outer.Inner inner= outer.new Inner(20);
		inner.setx(20);
		System.out.println(inner.getx());
		
		inner.showx();
		
		
		
	}
}