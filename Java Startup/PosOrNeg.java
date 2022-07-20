
import java.util.Scanner;

public class PosOrNeg {
    public static void main(String[] args){
        Scanner input=new Scanner (System.in);
        int n=input.nextInt();
        while(n>0){
             int x;
        x=input.nextInt();

        if(x>0)
            System.out.printf("%d is Positive\n",x);
        else if(x<0)
            System.out.printf("%d is negative\n",x);
        else
            System.out.printf("%d is Zero\n",x);
        n--;
        }
       
    }
}