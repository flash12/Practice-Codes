import javax.swing.*;
class array
{
	public static void main(String a[])
	{
		int i,j,temp,size,len,x=0;
		int n []= new int [30];
		int p []= new int [30];
		int q []= new int [60];
		size=Integer.parseInt(JOptionPane.showInputDialog("Enter size of array"));
		for(i=1;i<size;i++)
		{
			n[i]=Integer.parseInt(JOptionPane.showInputDialog("Enter no."));
		}
		System.out.print("The first array is ");
		for(i=1;i<size;i++)
		{
			System.out.println(n[i] +" ");
		}
		len=Integer.parseInt(JOptionPane.showInputDialog("Enter size of array"));
		for(j=1;j<len;j++)
		{
			p[j]=Integer.parseInt(JOptionPane.showInputDialog("Enter no."));
		}
		System.out.print("The second array is ");
		for(j=1;j<len;j++)
		{
			System.out.print(p[j] +" ");
		}
	        i=0;j=0; int m=0;
		while(i<size && j<len)
		{
			if(n[i]<p[j])
				q[m++]=n[i++];
			else
				q[m++]=p[j++];
		}
		if(i<size)
		while(i<size)
		q[m++]=n[i++];
		else
			while(j<len)
			q[m++]=p[j++];
		for(m=1;m<(len+size);m++)
		{
			System.out.println(q[m] +"");
		}	
	}
}