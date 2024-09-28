import utility.Person;
import utility.Date;
import utility.math.Calculator;
public class DemoPackage{
	public static void main(String a[]){
		Person p = new Person();
		p.display();
	
		Date d = new Date();
		d.display();
		
		Calculator.add(2,4);
		Calculator.sub(6,2);
	}
	
}