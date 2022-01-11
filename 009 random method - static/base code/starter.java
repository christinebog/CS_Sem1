import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Random rand = new Random();
		System.out.println("-------");
		//35.3 - 36.3
		//0 -    1 
		double b3;
		b3 = rand.nextDouble();
		System.out.println(b3);
		b3 = b3 + 35.3;
		System.out.println(b3);
		// double between 5 - 205
		
		System.out.println("-------");
		double c1; 
		c1 = rand.nextInt(200);  //0-199
		System.out.println(c1);
		c1 = c1 + 5;               //5-204 
		System.out.println(c1);
		//double between 0 - 199
		
		System.out.println("-------");
		double b2;
		b2= rand.nextInt(9);	    //0-9
		System.out.println(b2);
		b2 = b2 + 5;              //5-14
		System.out.println(b2);
		//double between 0 - 9
		
		System.out.println("-------");
		double b4;
		b4= rand.nextInt(100);	  //0-100
		System.out.println(b4);
		b4 = b4 + 5;			//0-105
		System.out.println(b4);
		//double between 1-100
		
		
	}
}
