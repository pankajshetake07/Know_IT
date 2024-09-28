package entities;

public class CustomerLinkedSet implements Comparable<CustomerLinkedSet>{
	private String name;
	private int id;
	
	public CustomerLinkedSet() {
		
	}

	public CustomerLinkedSet(String name, int id) {
		this.name = name;
		this.id = id;
	}
	
	public int getId() {
		return id;
	}
	
	public String toString() {
		return "\tName : "+name+"\tId : "+id;
	}

	@Override
	public int compareTo(CustomerLinkedSet o) {
		int diff = 0;
		if(this.getId() > o.getId()) {
			diff = 1;
		} 
		else if(this.getId() < o.getId()) {
			diff = -1;
		}
		return diff;
	}
}
