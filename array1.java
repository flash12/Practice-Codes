import javax.swing.*;
class D
{
	public static void main(String [] c)
	{
		int i,pos=1;
		int num[] = new int [5] ;
		for(i=0;i<5;i++)
		{
			num[i]=Integer.parseInt(JOptionPane.showInputDialog("Enter the no."));
		}
		int max=num[0];
		for(i=0;i<5;i++)
		{
			if(num[i]>max)
			{max=num[i];
			pos=i; }
		}
		System.out.println(max +"and" +pos);
	}
}

		