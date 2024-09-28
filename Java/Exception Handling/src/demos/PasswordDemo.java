package demos;

import java.util.Scanner;

import customException.PasswordTooLongException;
import entity.Password;

public class PasswordDemo {

	public static void main(String[] args) {
//		Password p = new Password("pankaj");
//		p.display();
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter string : ");
		String str = sc.nextLine();
		boolean flag = true;
		for(int i=0, j=str.length()-1; i<j; i++,j--) {
			
			if(str.charAt(i) != str.charAt(j)) {
				flag = false;
			}
		}
		
		if(flag) {
			System.out.println("String is palindrome");
		} else {
			System.out.println("String is not palindrome");
		}
		
	}

}
