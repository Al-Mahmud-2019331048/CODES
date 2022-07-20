import java.util.Scanner;

public class BitwiseOperator {
    public static void main(String[] args){
        int x,y;
        Scanner input= new Scanner(System.in);
        x=input.nextInt();
        y=input.nextInt();

        System.out.printf("%d & %d is %d\n",x,y,x&y);
        System.out.printf("%d | %d is %d\n",x,y,x|y);
        System.out.printf("%d ^ %d is %d\n",x,y,x^y);
        System.out.printf("%d>>1=%d\n",x,x>>1);
        System.out.printf("%d<<1=%d\n",x,x<<1);

    
    }
}