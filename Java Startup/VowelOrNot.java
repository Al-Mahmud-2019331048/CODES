
import java.util.Scanner;

public class VowelOrNot {
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        char ch;
        ch=input.next().charAt(0);  //one char input

        if(ch=='a' || ch=='A' || ch=='e' || ch=='E'|| ch=='i' || ch=='I'||ch=='o' || ch=='O'|| ch=='u' || ch=='u' )
            System.out.println("Vowel\n");
        else
            System.out.println("Consonant\n");


    }
}