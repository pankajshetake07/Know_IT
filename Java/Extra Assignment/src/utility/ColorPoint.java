package utility;

public class ColorPoint extends Point {
	
	private static String [] colors;
	private String color;
	static {
		colors = new String[5];
		colors[0] = "Red";
		colors[1] = "Green";
		colors[2] = "Purple";
		colors[3] = "Black";
		colors[4] = "Orange";
	}

	public ColorPoint() {
		super();
	}

	public ColorPoint(int x_cordinate, int y_cordinate, String color) {
		super(x_cordinate, y_cordinate);
		boolean flag = false;
		for(int i=0; i<colors.length; i++) {
			if(colors[i].equals(color)) {
				flag = true;
				break;
			}
		}
		if(flag) {
			this.color = color;
		} else {
			this.color = "white";
		}
	}

	@Override
	public void display() {
		super.display();
		System.out.println("Color : "+color);
	}

	@Override
	public String toString() {
		return super.toString() + "\nColor : "+color;
	}
	
}
