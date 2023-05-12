import java.io.*;
import java.util.*;

public class temp {	// wrong name to avoid copying main function by mistake
	public static void main(String[] args) {
		try {
			System.setIn(new FileInputStream("input.txt"));
			System.setOut(new PrintStream(new FileOutputStream("output.txt")));
		} catch (Exception e) {
			System.err.println("Error");
		}
		Scanner sc = new Scanner(System.in);
		/////////
		while(sc.hasNext()) {
			System.out.println(sc.next());
		}
		/////////
	}
}