package laba_5_oop;

public class Base {
String name;
  public Base() {
		// TODO Auto-generated constructor stub
	name="Base";
	}
  void myname(){
    System.out.println("This is class"+name);
  }
}
class DerA extends Base{
	public DerA(){
	name="DerA";	
	}
	void myname(){
	    System.out.println("This is class"+name);
	  }	
}
class DerB extends Base{
	public DerB(){
	name="DerB";	
	}
	void myname(){
	    System.out.println("This is class"+name);
	  }	
}

class DerAB extends DerA{
	public DerAB(){
	name="DerAB";	
	}
	void myname(){
	    System.out.println("This is class"+name);
	  }	
}