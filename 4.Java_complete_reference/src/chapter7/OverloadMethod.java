package chapter7;

public class OverloadMethod {

    void sum() {
        System.out.println("No Parameter");
    }

    void sum(int a, int b) {
        System.out.println(a + b);
    }

    //return type different but parameter+method name same -> wrong (not overloading)
    /*
	 int sum(int a,int b){
	 	return a+b;
	 }
     */
    double sum(int x, double y) {
        return x + y;  //x auto cast into double
    }
    double h = 2, l = 3;

    //using object as a parameter
    boolean test(Box b) {
        if (b.height == h && b.length == l) {
            return true;
        } else {
            return false;
        }

//      return b.height == h && b.length == l;

    }
}
