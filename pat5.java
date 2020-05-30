class pat5
{
	public static void main(String a[])
	{
		int i,j;
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=9;j++)
			{
				if(j>=6-i && j<=4+i)
				System.out.print("*");
				else
				System.out.print(" ");
			}
			System.out.println();
		}
	}
}	
		