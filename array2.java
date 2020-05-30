import javax.swing.*;
class array2 
{
	public static void main(String a[])
	{
		int i,j,size,temp;
		size=Integer.parseInt(JOptionPane.showInputDialog("Enter the size"));
		int n []= new int[50];
		for(i=1;i<size;i++)
		{
			n[i]=Integer.parseInt(JOptionPane.showInputDialog("Enter the number"));
		}
		for(i=1;i<size;i++)
		{
			for(j=1;j<(size-i);j++)
			if(n[j]>n[j+1])
			{	
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
			}
		}
			System.out.println("The after sorted is");
			for(i=1;i<size;i++)
			{
				System.out.println(" " +n[i]);
			}
		}
	}
	