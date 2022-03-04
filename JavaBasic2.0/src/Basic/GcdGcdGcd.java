// package Basic;

import java.util.Scanner;

public class GcdGcdGcd {
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		int test=input.nextInt();
		while(test>0) {
			int x=input.nextInt();
			System.out.printf("%d %d\n",1,x-1);
			test--;
		}
		input.close();
	}

}
