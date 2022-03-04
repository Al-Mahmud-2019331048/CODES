package oopJAVA;

public class DoctoeObject {
	public static void main(String[] args) {
		Doctor doctor1=new Doctor("Zafor Iqbal","2345463","Cardiologist",45);
		doctor1.display();
		Doctor doctor2=new Doctor("Al Mahmud","6305483","Medicin",55);
		doctor2.display();
		
		Doctor doctor3=new Doctor();
		doctor3.display();
	
	}
}
