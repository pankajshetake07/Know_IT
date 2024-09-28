package entities;

public class Student {
	private int id;
	private String name;
	private String city;
	private double percentage;
	
	public Student() {
		
	}

	public Student(int id, String name, String city, double percentage) {
		this.id = id;
		this.name = name;
		this.city = city;
		this.percentage = percentage;
	}

	@Override
	public int hashCode() {
		int cityCode = 0;
		if(city.equalsIgnoreCase("kolhapur")) {
			cityCode = 101;
		}
		else if(city.equalsIgnoreCase("pune")) {
			cityCode = 201;
		}
		else if(city.equalsIgnoreCase("mumbai")) {
			cityCode = 301;
		}
		return cityCode;
	}

	@Override
	public boolean equals(Object obj) {
		boolean flag = false;
		if(obj instanceof Student) {
			Student s = (Student) obj;
			if(this.id == s.id) {
				if(this.name == s.name) {
					if(this.city == s.city) {
						flag = true;
					}
				}
			}
		}
		return flag;
	}

	@Override
	public String toString() {
		return "\nId : "+id+"\tName : "+name+"\tCity : "+city+"\tPercentage : "+percentage;
	}
	
	
	
}
