package polymorphismArea;

public class Test {
	public static void main(String [] args) {
		Shape s=new Shape();
		Rectangle r=new Rectangle(10,20);
		Triangle t= new Triangle(10,20);
		
		System.out.println(s.area());
		System.out.println(r.area());
		System.out.println(t.area());
		
		//runtime polumorphism
		Shape s1 =new Rectangle(10,20);
		Shape s2 = new Triangle(10,20);
		
		System.out.println(s1.area());
		System.out.println(s2.area());
		
		//for many objects
		Shape[] ss=new Shape[10];
		ss[1]=new Rectangle(100,200);
		ss[2]=new Rectangle(10,25);
		
	}
}
