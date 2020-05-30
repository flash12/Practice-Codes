class pat7 
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
		for(int i=0;i<=4;i++)
		{
			for(j=0;j<=4;j++)
			{
				if(j<=5-i)
				System.out.print("* ");
			}
			System.out.println();
		}
			
	}
}