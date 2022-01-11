import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner (System.in);
		System.out.println("Whats your name ?");
		String text1 = sc.nextLine();
		System.out.println("How old are you?");
		int text2 = sc.nextInt();
		System.out.println("What month were you born? (1-12)");
		int text3 = sc.nextInt();
		System.out.println("What day are you born? (1-31)");
		int text4 = sc.nextInt(); 
		System.out.println("What year were you born in? (2000-2014)");
		int text5 = sc.nextInt();
		System.out.println("How much is a buck fifty?");
		double text6 = sc.nextDouble();
		System.out.println(text1);
		System.out.println(text2);
		System.out.println(text3);
		System.out.println(text4);
		System.out.println(text5);
		System.out.println(text6);
	}
}
