class a
{
	public void f1()
	{ System.out.println("Class A");}
}
class b extends a
{
	public void f1()
	{ 
	  System.out.println("Class B"); }
}
class example
{	
	public static void main(String as[])
	{
		b obj=new b();
		obj.f1();
	}
}