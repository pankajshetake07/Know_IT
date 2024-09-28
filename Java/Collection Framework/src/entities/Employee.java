package entities;

public class Employee {
	
	private int empId;
	private String empName;
	private double salary;
	private String department;
	
	public Employee() {
		
	}

	public Employee(int empId, String empName, double salary, String department) {
		super();
		this.empId = empId;
		this.empName = empName;
		this.salary = salary;
		this.department = department;
	}
	
	public int getEmpId() {
		return empId;
	}
	
	public double getSalary() {
		return salary;
	}
	
	public String getEmpName() {
		return empName;
	}
	
	public String getDepartment() {
		return department;
	}

	public String toString() {
		return "\nEmpID : "+empId+"\tEmpName : "+empName+"\tEmpSalry : "+salary+"\tDepartment : "+department;
	}

//	@Override
//	public int compareTo(Employee e) {
//		int diff = 0;
//		if(this.salary > e.salary) {
//			diff = 1;
//		}
//		else if(this.salary < e.salary) {
//			diff = -1;
//		} 
//		else {
//			diff = this.empName.compareTo(e.empName);
//		}
//		return diff;
//	}
	
	
}
