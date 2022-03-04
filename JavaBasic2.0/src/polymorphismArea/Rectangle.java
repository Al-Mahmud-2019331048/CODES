package polymorphismArea;

public class Rectangle extends Shape {

	double length,width;
	
	//constructor
	Rectangle(double length,double width){
		this.length=length;
		this.width=width;
	}
	
	double area() {
		System.out.println("Area for rectangle:");
		return length*width;
	}
}
