import javax.swing.*;
class pri
{
	public static void main(String a[])
	{
		int num,n,count;
		int i=1;
		num=Integer.parseInt(a[0]);
		while(i<=num)
		{
			 count=0;
			 n=2;
			 while(n<=i/2)
			 {
				if(i%n==0)
				{
					count++;
				 	break;
				}
				n++;
			  }
				if(count==0 && i!=1)
			        {
				     System.out.print(i+ " ");
		                }	
			        i++;
		}
	}
}					   