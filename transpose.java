import javax.swing.*;
class D
{
	public static void main(String as[])	
	{
		int i,j;
		int a[][]=new int [10][10];
		int b[][]=new int [10][10];



		int size=Integer.parseInt(JOptionPane.showInputDialog("Enter the array")); 
		for(i=1;i<size;i++)
		{
			for(j=1;j<size;j++)
			{
				a[i][j]=Integer.parseInt(JOptionPane.showInputDialog("Enter the array"));
			}
		}
		for(i=1;i<size;i++)
		{
			for(j=1;j<size;j++)
			{
				System.out.println(a[i][j]+ " ");
			}
		System.out.println();
		}
		for(i=1;i<size;i++)
		{
			for(j=1;j<size;j++)
			{
				b[i][j]=a[j][i];
			}
		}
		for(i=1;i<size;i++)
		{
			for(j=1;j<size;j++)
			{
				System.out.print(b[i][j]+ "");
			}
		System.out.println();
		}
	}
}
			

 