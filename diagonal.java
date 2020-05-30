import javax.swing.*;
class dia
{	public static void main(String as[])
	{	int i,j;
		int a[][]=new int [5][5];
		int b[][]=new int [5][5];
		int r=Integer.parseInt(JOptionPane.showInputDialog("Enter the rows"));
		int c=Integer.parseInt(JOptionPane.showInputDialog("Enter the columns"));
		for(i=1;i<r;i++)
		{	for(j=1;j<c;j++)
			{	a[i][j]=Integer.parseInt(JOptionPane.showInputDialog("Enter the array"));
			}
		}	
		for(i=1;i<r;i++)
		{	for(j=1;j<c;j++)
			{	System.out.print(a[i][j] +" "); }
			System.out.println();
		}
		for(i=1;i<c;i++)
		{	for(j=1;j<r;j++)
			{	b[i][j]=a[j][i]; }
					
		}
		for(i=1;i<r;i++)
		{	for(j=1;j<c;j++)
			{	System.out.print(b[i][j] +" "); }
			System.out.println();
		}
	}
}	