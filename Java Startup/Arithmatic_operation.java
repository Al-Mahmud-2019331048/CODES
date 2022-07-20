
import java.util.Scanner;  //util er under e scanner ekta class

public class Arithmatic_operation{
    public static void  main(String[] args){
        int x,y,z,sum,sub,mul,modu,T;
        double div;

        Scanner input = new Scanner(System.in);  //note
        T=input.nextInt();  //int input
        while(T>0){
        x=input.nextInt();
        y=input.nextInt();
        sum=x+y;
        sub=x-y;
        mul=x*y;
        div=(double)x/y;  //type casting
        modu=x%y;
        // System.out.println(z);
        System.out.printf("sum=%d\n",sum);
        System.out.printf("sub=%d\n",sub);
        System.out.printf("mul=%d\n",mul);
        System.out.printf("div=%.2f\n",div);
        System.out.printf("modu=%d\n",modu);
        T--;
        }
        
    }

}