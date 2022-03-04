
import java.util.Scanner;
public class Userinput {
   public static void main(String[] args){
       int num;
       String name;
       double d;
       Scanner input = new Scanner(System.in);

    //    System.out.println("enter any number:");
    //    num=input.nextInt();
    //    System.out.println("num="+num);

       System.out.println("enter any Name:");
       name=input.nextLine();
       System.out.println("name="+name);

       
       System.out.println("enter any double number:");
       d=input.nextDouble();
       System.out.println("d="+d);

   }
        



    }