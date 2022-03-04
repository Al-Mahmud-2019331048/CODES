package array;

import java.util.*;

public class ArrayInput {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		double arr[] = new double[5];
		double sum = 0;
		System.out.println("Please Enter five numbers:");
		for (int i = 0; i < 5; i++) {
			arr[i] = input.nextDouble();
			sum += arr[i];
		}
		

		for (int i = 0; i < arr.length; i++) {
			System.out.printf("%.2f ", arr[i]);
		}
		System.out.println();
		System.out.print("Sum is = " + sum);
		System.out.println();
		System.out.print("Average is = " + sum / 5);
		
		//maximum,minimum
		double maxi=arr[0],mini=arr[0];
		for(int i=1;i<5;i++) {
			if(maxi<arr[i])
				maxi=arr[i];
			if(mini>arr[i])
				mini=arr[i];
		}
		System.out.println("Maximum = "+maxi);
		System.out.println("Minimum = "+mini);
		
		
		input.close();
	}
}
