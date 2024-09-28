package office.utility;

public class Person {
    String name;
    Date dob;
    public Person(){
        name = "lajsd";
        this.dob = new Date();
    }

    public Person(String name){
        this.name = name;
    }

    public void display(){
        dob.display();
        System.out.println("Name : "+name);
    }
}
