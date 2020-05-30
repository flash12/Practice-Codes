import java.io.*;
import javax.swing.*;
public class myfile
{
 public static void main(String []args)
 {
  FileOutputStream f=null;
  try{
  f=new FileOutputStream("xyz.txt");
  String S;
  S=JOptionPane.showInputDialog("Enter the String");
  char ch[]=S.toCharArray();
  int t=S.length();
  for(int i=0;i<t;i++)
  {
   f.write(ch[i]);
  }
    
  }
  catch(Exception e)
  {
	  System.out.println(e);
  }
 }
}