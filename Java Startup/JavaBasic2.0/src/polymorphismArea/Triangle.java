package polymorphismArea;

public class Triangle extends Shape {

	double base,height;
	
	//constructor
	Triangle(double base,double height){
		this.base=base;
		this.height=height;
	}
	
	double area() {
		System.out.println("Area for Trianhle:");
		return 0.5*base*height;
	}
}
