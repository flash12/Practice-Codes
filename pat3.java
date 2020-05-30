class pat3
{
	public static void main(String a[])
	{
		int i,j;
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=5;j++)
			{
				if(j<=6-i)
				System.out.print(j);
				else
				System.out.print(" ");
				
			}
			System.out.println();
		}
	}
}