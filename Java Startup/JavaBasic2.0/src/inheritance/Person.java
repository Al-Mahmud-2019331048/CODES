package inheritance;

public class Person {
	String name;
	int age;
	private String sex;
	
	public String getSex() {
		return sex;
	}

	public void setSex(String sex) {
		this.sex = sex;
	}

	void display1() {
		System.out.println("Name: "+name);
		System.out.println("Age: "+age);
	}
}
