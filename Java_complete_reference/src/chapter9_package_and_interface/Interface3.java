/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter9_package_and_interface;

/**
 *
 * @author Hp
 */

//nested interface
class Ai{
    public interface NestedIF{   //private or protected can also be written
        boolean isNotNegative(int x);
    }
}

class Bi implements Ai.NestedIF{   //notice Ai.NestedIF
    @Override
    public boolean isNotNegative(int x){
        return x >= 0;  //return x<0 ? false: true;
    }
}

public class Interface3 {
    public static void main(String[] args) {
        Ai.NestedIF nif = new Bi();
        
        if(nif.isNotNegative(10))
            System.out.println("Positive");
    }
}
