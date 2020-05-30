class A implements Runnable
{	
	public void run()
	{
		try{
		for(int i=1;i<=10;i++)
		{
			System.out.println("Thread A: "+i);
			sleep(1000);
		}
		}
		catch(Exception e) {}	
	}
}
class B implements Runnable
{	
	public void run()
	{
		try{
		for(int i=1;i<=10;i++)
		{
			System.out.println("Thread B: "+i);	
			sleep(1000);
		}
		}
		catch(Exception e){}
	}
}
class C implements Runnable
{	
	public void run()
	{
		try{
		for(int i=1;i<=10;i++)
		{
			System.out.println("Thread C: "+i);	
			sleep(1000);
		}
		}
		catch(Exception e){}
	}
}

class Exam
{	
	public static void main(String []args)
	{	
		A t1=new A();
		B t2=new B();
		C t3=new C();
		t1.start();
		t2.start();
		t3.start();
	}
}