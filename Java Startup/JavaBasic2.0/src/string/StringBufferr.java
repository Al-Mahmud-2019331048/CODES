package string;

//we change the buffer string
public class StringBufferr{
	public static void main(String[] args){
		StringBuffer ss=new StringBuffer("Abdulla Al Mahmud");
		System.out.println(ss);
		
		//adding other datatypes(int/float) in string
		ss.append(48);
		System.out.println(ss);
		ss.append(101.11);
		System.out.println(ss);
		ss.append("in");
		System.out.println(ss);
		
		//reverse
		ss.reverse();
		System.out.println(ss);
		
		//delete between two index
		ss.delete(0, 4);
		System.out.println(ss);
		
		//set length & crop
		ss.setLength(5);
		System.out.println(ss);
		
		
		
	}

}