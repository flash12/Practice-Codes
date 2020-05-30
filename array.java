import javax.swing.*;
class array
{
	public static void main(String a[])
	{
		int i,j,temp,size;
		int n []= new int [20];
		size=Integer.parseInt(JOptionPane.showInputDialog("Enter size of array"));
		for(i=1;i<size;i++)
		{
			n[i]=Integer.parseInt(JOptionPane.showInputDialog("Enter no."));
		}
		for(i=1;i<size;i++)
		{
			for(j=0;j<size-i;j++)
			if(n[j]>n[j+1])
			{	
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
			}
		}
		System.out.println("The Sorted Array is  ");
		for(i=1;i<size;i++)
		{
			System.out.print(n[i] +" ");
		}
	}
}

