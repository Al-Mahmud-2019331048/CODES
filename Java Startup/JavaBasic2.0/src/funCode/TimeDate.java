package funCode;

import java.util.Date;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.time.LocalTime;

public class TimeDate {
public static void main(String[] args) {
	
	//current date
	Date date=new Date();
	System.out.println(date);
	
	//organise
	DateFormat dateFormat=new SimpleDateFormat("DD/MM/YYYY");
	String currentDate=dateFormat.format(date);
	System.out.println("Current Date:\n"+currentDate);
	
	//current time
	LocalTime time=LocalTime.now();
	System.out.println("Time:\n"+time);
	
	}
}
