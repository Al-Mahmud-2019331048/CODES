/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package chapter8_inheritance;

/**
 *
 * @author BM Mahmud
 */
public class Override1 {
    int x;
    
    protected int sum(int i,int j){
        return i+j;
    }
}

class ayhay extends Override1{
    @Override
    //override does not depends on return type
    public int sum(int a,int b){
        return a+b;
    }
}
