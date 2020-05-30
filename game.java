import javax.swing.*;
class reverse
{
	public static void main(String []args)
	{	
		String a[]="My Car is fun".split(" ");
		String rev="";
		for(int i=a.length-1;i>=0;i--)
		{
			rev=rev+a[i]+" ";
		}
		System.out.println("The reverse of the String is :"+rev);
		
	}
}