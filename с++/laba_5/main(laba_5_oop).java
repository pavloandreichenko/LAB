package laba_5_oop;

public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Base obj1=new Base();
    obj1.myname();
    
    DerA obj2=new DerA();
    obj2.myname();
    
    DerB obj3=new DerB();
    obj3.myname();
    
    DerAB obj4=new DerAB();
    obj4.myname();
    
    Base mas[]={new Base(), new DerA(), new DerB(),new DerAB()};
    mas[0]=new Base();
    mas[0].myname();
    mas[1].myname();
    mas[2].myname();
    mas[3].myname();
    
	}

}
