package entities;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.Serializable;

public class Customer implements Serializable{
	private String name;
	private String email;
	private String contact;
	
	public Customer() {
		
	}

	public Customer(String name, String email, String contact) {
		this.name = name;
		this.email = email;
		this.contact = contact;
	}
	
	public void accept() throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("\tEnter name : ");
		name = br.readLine();
		System.out.print("\tEnter email : ");
		email = br.readLine();
		System.out.print("\tEnter contact : ");
		contact = br.readLine();
	}
	public String toString() {
		return "\nName : "+name+"\nEmail : "+email + "\nContact : "+contact;
	}
}
