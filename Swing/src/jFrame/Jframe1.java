package jFrame;

import javax.swing.JFrame;

public class Jframe1 {
	public static void main (String args []) {
		
		JFrame frame = new JFrame();
		frame.setTitle("Mahmud");   //title
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setResizable(false);
		frame.setSize(420,420); 
		frame.setVisible(true);  //make visible
		
	}
}
