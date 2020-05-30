import javax.swing.*;
import java.io.*;

public class b
{
	int a;
	int b;
	String c;
	public void getdata()
	{
		 a=Integer.parseInt(JOptionPane.showInputDialog("Enter roll"));
		 b=Integer.parseInt(JOptionPane.showInputDialog("Enter marks"));
		 c=JOptionPane.showInputDialog("Enter Name");
	}
    public void putdata()
	{
		System.out.println("Roll" +a);
		System.out.println("Marks" +b);
		System.out.println("Name" +c);
	}
	
	public static void main(String []args)
	{
		b b1= new b();
		FileOutputStream fo=null;
		
		try{
				fo=new FileOutputStream("ashwani.txt");
				int ch[]= new int [20];
				for(int i=0;i<2;i++)
				{
					b1.getdata();
					fo.write(ch[i]);
				}	
		}
		catch(Exception e) {System.out.println(e);}
		
	}
}