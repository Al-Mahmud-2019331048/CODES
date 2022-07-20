package array;

public class Array1 {
	public static void main(String[] args) {
		int arr[];
		arr = new int[5]; //declearing
		//Or, int arr[]=new int[5];
		arr[0]=12;
		arr[1]=23;
		arr[2]=-6;
		arr[3]=25;
		arr[4]=10;
		
		System.out.println(arr.length);  //size
		int sum=0;
		
		for(int i=0;i<arr.length;i++) {
			sum+=arr[i];
			System.out.printf("%d ",arr[i]);
		}
		System.out.println();
		System.out.println("sum= "+sum);
	}
}
