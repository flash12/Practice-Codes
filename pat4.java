class pat4
{
	public static void main(String a[])
	{
		int i,j;
		for(i=5;i>=1;i--)
		{
			for(j=5;j>=1;j--)
			{
				if(j<=i)
				System.out.print(j);
			}
			System.out.println();
		}
	}
}