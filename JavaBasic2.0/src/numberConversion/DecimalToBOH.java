package numberConversion;

public class DecimalToBOH {
	public static void main(String[] args) {
		int decimal=15;
		String binary=Integer.toBinaryString(decimal);
		System.out.println("binary="+binary);
		
		String octal=Integer.toOctalString(decimal);
		System.out.println("octal="+octal);
		
		String hexa=Integer.toHexString(decimal);
		System.out.println("hexadecimal="+hexa);
		
	}
}