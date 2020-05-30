import javax.swing.*;
class even
{
	public static void main(String a[])
	{
		
		int n=Integer.parseInt(a[0]);
		switch(n)
		{
			case 1: 
				System.out.println("Enter the no.");
			int nu=Integer.parseInt(a[1]);
				for(int i=0;i<=nu/2;i++)
				{ 
					if(nu%i==0)
				System.out.println("not prime");
				}
				break;
		}
	}
}	