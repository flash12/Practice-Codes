class pat8
{
	public static void main(String a[])
	{
		int i,j;
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=5;j++)
			{
				if(j<=i)
				System.out.print("* ");
			}
			System.out.println();		
		}
		for( i=0;i<=3;i++)
		{
			for(j=0;j<=3;j++)
			{
				if(j<=3-i)
				System.out.print("* ");
			}
			System.out.println();
		}
			
	}
}