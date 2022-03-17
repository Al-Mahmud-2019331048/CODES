package chapter6_class;

public class Main {
	public static void main(String args[]) {
		
		//creating object
		Box b1=new Box(2.2,1.3,0.5);
		
		//printing wihout display() function
		
		System.out.println("Length: "+b1.length);
		System.out.println("Height: "+b1.height);
		System.out.println("Width: "+b1.width);
		System.out.println("Volume: "+b1.Volume(2.2, 1.3, 0.5));
		
		b1.height=4.5;   //changing height
		b1.display();
		
		
		//printing height,weigth,length by display() function
		
		Box b2=new Box(1,3,4);
		b2.display();
		
	}
}
