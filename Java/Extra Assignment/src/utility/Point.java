package utility;

public class Point {
	private int x_cordinate;
	private int y_cordinate;
	
	public Point() {
		
	}

	public Point(int x_cordinate, int y_cordinate) {
		this.x_cordinate = x_cordinate;
		this.y_cordinate = y_cordinate;
	}
	
	public void display() {
		System.out.println("[" + x_cordinate + "," + y_cordinate + "]");
	}
	
	public String toString() {
		return "[" + x_cordinate + "," + y_cordinate + "]";
	}
	
}
