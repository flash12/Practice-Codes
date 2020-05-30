import javax.swing.*;
class reverse
{
	public static void main(String a[])
	{
		String b,rev="";
		b=JOptionPane.showInputDialog("Ente the String :");
		b+=" ";
		int t=b.length();
		System.out.println("The length of the String is "+t);
		for(int i=0;i<t;i++)
		{
			rev=rev+b.charAt(i);
			if (b.charAt(i)==' ')
			{
				for(int k=rev.length()-1; k>=0; k--)
				{
					System.out.print(rev.charAt(k));
				}
				rev="";
			}
		}	
	}
}	
		