package oopJAVA;

public class PeopleObject {
	public static void main(String[] args) {
		People people1=new People();
		
		//efficient program (input output by method)
		people1.setInformatin("Al Mahmud","223096567",25);
		people1.display();
		
		People people2=new People();
		people2.setInformatin("Nazmus Sakib", "56787656", 29);
		people2.display();
	}
}
