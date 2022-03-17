import java.util.Scanner;

public class cf777div2 {
	public static void main(String args[] ) {
		Scanner input = new Scanner(System.in);
		int n,m,test;
		test=input.nextInt();
		while(test>0) {
			test--;
			n=input.nextInt();
			m=input.nextInt();
			char s[][]=new char[n][m];
			
			for(int i=0;i<n;i++) {
				for(int j=0;j<m;j++) {
					s[i]=input.next().toCharArray();
				}
			}
			boolean flag=false;
			for(int i=0;i<n-1;i++) {
				
				for(int j=0;j<m-1;j++) {
					int cnt=0;
					System.out.println(s[i][j]);
					if(s[i][j]==1) cnt++;
					if(s[i][j+1]==1) cnt++;
					if(s[i+1][j]==1) cnt++;
					if(s[i+1][j+1]==1) cnt++;
					
					if(cnt==3) { 
						System.out.println("NO");
						flag=true;
						break;
					}
				}
//				System.out.println(cnt);
				if(flag==true) break;
			}
			
			if(flag==false) System.out.println("YES");
			
			
			
		}
		
//		input.close();
	}
}
