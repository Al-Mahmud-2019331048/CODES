package array;

public class MajakAya {
	public static void main(String[] args) {
		int arr[][]=new int[4][];
//		taking input for 2nd dimension or column
		arr[0]=new int[1];
		arr[1]=new int[2];
		arr[2]=new int[3];
		arr[3]=new int[4];
		
		for(int i=0;i<4;i++) {
			for(int j=0;j<i+1;j++) {
				arr[i][j]=i+j+1;
			}
		}
		for(int i=0;i<4;i++) {
			for(int j=0;j<i+1;j++) {
				System.out.printf("%d ",arr[i][j]);
			}
			System.out.println(); //\n
		}

	}
}
