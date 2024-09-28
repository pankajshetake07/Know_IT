package entities;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.Serializable;

public class RegCustomer extends Customer{
	int regNo;
	
	public RegCustomer() {
		super();
	}

	public RegCustomer(int regNo) {
		super();
		this.regNo = regNo;
	}
	
	public void accept()throws Exception{
		super.accept();
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("\tEnter Registration No : ");
		regNo = Integer.parseInt(br.readLine());
	}
	
	public String toString() {
		return super.toString()+"\nReg No : "+regNo;
	}
}
