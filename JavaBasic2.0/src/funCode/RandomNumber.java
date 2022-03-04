package funCode;

import java.util.Random;

public class RandomNumber {
	public static void main(String[] args) {
		
		//method 1........................
		Random rand=new Random();
		int randomNumber=rand.nextInt(10);  //0 to 9
		System.out.println(randomNumber);
		
		randomNumber=rand.nextInt(10)+1;  //1 to 10
		System.out.println(randomNumber);
		
		randomNumber=rand.nextInt(6)+1;  //5 to 10
		System.out.println(randomNumber);
		
		randomNumber=rand.nextInt(91)+10;  //10 to 100
		//100-10+1
		System.out.println(randomNumber);
		
		//method 2.........................
		int r=(int) Math.random()*10;  //0 to 9,returns double
		System.out.println(r);
		
		r=(int) Math.random()*10 + 1;  //1 to 10,returns double
		System.out.println(r);
		
		
		
		
	}
}
