class Text 
{
	private static int a,b;
	public static void sum()
	{	
		a=12; b=20;
		System.out.println(a+b);
	}
}
class P extends Text
{
	int c,d;
	public void add()
	{	
		c=50; d=100;
		System.out.println(c+d);
	}
	public static void main(String as[])
	{
		P p1=new P();
		p1.sum();
		p1.add();
	}
}