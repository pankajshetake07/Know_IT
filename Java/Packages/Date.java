package utility;
public class Date{
	public int day;
	public int month;
	public int year;
	
	public Date(){
		day = month = 1;
		year = 2022;
	}
	
	public Date(int day, int month, int year){
		this.day = day;
		this.month = month;
		this.year = year;
	}
	
	public void display(){
		System.out.println(day+"/"+month+"/"+year);
	}
	
}