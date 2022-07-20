package numberConversion;

public class BOHtoDecimal {
	public static void main(String[] args) {
		
		String binary="101101";
		System.out.println(binary);
		Integer decimal=Integer.parseInt(binary,2);
		System.out.println(decimal);
		
		String octal="765";
		System.out.println(octal);
		Integer dec=Integer.parseInt(octal, 8);
		System.out.println(dec);
		
		String hexa="56f";
		System.out.println(hexa);
		Integer d=Integer.parseInt(hexa, 16);
		System.out.println(d);
		
		
	}
}
