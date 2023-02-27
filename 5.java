import java.text.NumberFormat;
import java.text.ParsePosition;
import java.util.Scanner;

public class Main {	
	
	public class isNumeric {
		
		static boolean isDigit(String str){
		ParsePosition pos = new ParsePosition(0);
		NumberFormat.getInstance().parse(str, pos);
		
		return str.length() == pos.getIndex();
		}
	}
	public static void main(String[] args) {
		
		boolean flag;
		Scanner scanner = new Scanner(System.in);
		String number;
		
		do {
			System.out.print("Enter a number: ");
			number = scanner.nextLine();
			
			number = number.trim();
			isNumeric.isDigit(number);

			if (!isNumeric.isDigit(number)) {
				System.out.println("Not a number\n");
				flag = false;
			}
			else { flag = true; }
		} while (flag == false);
		
		double num = Double.parseDouble(number);
		int numInt = (int)num;
		scanner.close();
		System.out.println();
		checkingReminder(numInt);
	}
	static void checkingReminder(int n) {
		
		int i = 0, j = 0;
		
		do {
			if (i % 3 == 0 || i % 5 == 0) {
				System.out.print(i + " + ");
				j += i;
			}
			i++;
			
		} while (i != n);
		
		j+= i;
		
		System.out.println(i + " = " + j);
	}

}
