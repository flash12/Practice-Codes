class Box
{
	private int l,b,h;
	public Box()
	{
		l=10;b=20;h=30;
	}
	public Box(int L,int B,int H)
	{
		l=L;
		b=B;
		h=H;
	}
	public static void main(String [] a)
	{
		
		Box b1=new Box();
		Box b2=new Box(20,30,40);
	}
}