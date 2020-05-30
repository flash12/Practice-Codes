class First
{
	public void msg1()
	{
			System.out.println("First Class");
	}
}
class Third
{
	public void msg3()
	{
			System.out.println("Third Class");
	}
}
class Second extends Third extends First
{
	public void msg2()
	{
		System.out.println("Second Class");
	}
	public static void main(String as[])
	{
		Second p2=new Second();
		
		p2.msg2();
		p2.msg3();
	}
}