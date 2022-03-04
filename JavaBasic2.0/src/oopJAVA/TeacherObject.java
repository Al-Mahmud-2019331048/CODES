package oopJAVA;

public class TeacherObject {
	public static void main(String[] args) {
		
		//creating object from TeacherClass
		TeacherClass teacher1;
		teacher1=new TeacherClass();
        //TeacherClass teacher1=new TeacherClass();
		
		teacher1.name="Abdulla Al Mahmud";
		teacher1.gender="Male";
		teacher1.phone=669120;
		System.out.println("Name : "+teacher1.name);
		System.out.println("Gender : "+teacher1.gender);
		System.out.println("Phone : "+teacher1.phone);
		System.out.println();
		
		
		//other object
		TeacherClass teacher2=new TeacherClass();
		teacher2.name="Saied Afnan";
		teacher2.age=25;
		teacher2.phone=678302;
		teacher2.gender="Male";
		
		System.out.println("Name : "+teacher2.name);
		System.out.println("Gender : "+teacher2.gender);
		System.out.println("Phone : "+teacher2.phone);
		System.out.println("Age : "+teacher2.age);

	}
}
