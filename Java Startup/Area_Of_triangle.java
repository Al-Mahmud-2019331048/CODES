
import java.util.Scanner;
public class Area_Of_triangle {
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        double base,height,area;
        base=input.nextDouble();
        height=input.nextDouble();
        area=0.5*base*height;
        System.out.printf("Area of triangle for base %f and height %f = %f\n",base,height,area);
    }
}