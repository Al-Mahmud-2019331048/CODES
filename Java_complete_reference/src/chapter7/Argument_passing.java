package chapter7;

public class Argument_passing {
	int a,b;
	
	Argument_passing(){
		
	}
	
        //private constructor never be used
	Argument_passing(int x,int y){
		a=x;
		b=y;
	}
        
        //pass by value
	void change(int i,int j) {
		i*=2;
		j/=2;
	}
	
        //pass by reference
	void change(Argument_passing ob) {
		this.a *= 2;  //ob.a*=2
		this.b /= 2;
	}
}


class Static_c{
    static int x,y;
    void change(int x,int y) {
		this.x *= 2;  //ob.a*=2
		this.y /= 2;
	}
}