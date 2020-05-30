class pat6 
{
	public static void main(String a[])
	{
		int i,j,n=3,odd=1;
		for(i=1;i<=5;i++)
		{
			int k=0;
			for(j=1;j<=n;j++)
			{
				System.out.print(" ");
			}
			for(j=1;j<=odd;j++)
			{
				if(j<=i)
				{ k+=1;}
				else
 				{ k-=1; }
				System.out.print(k);
			}
			System.out.println();
			odd+=2;
			n-=1;		
		}
	}
}