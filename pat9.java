class pat9 
{
	public static void main(String a[])
	{
		int i,j;
		int n=1;
		for(i=1;i<=7;i++)
		{
			for(j=1;j<=n;j++)
			{
				System.out.print("*");
			}
			System.out.println();
			if(i<4)
				{ n+=2;}
			else
			        { n-=2; }					
		}
	}
}