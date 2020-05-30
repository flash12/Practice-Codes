import javax.swing.*;
class rec
{
 public static void main(String []args)
 {
   String str,rev="";
   str=JOptionPane .showInputDialog("Enter the string");
   int t=str.length();
   int p,max=0;
   int mn=t;
   String m="",n="";
   str=str+"";
   for(int i=0;i<t;i++)
   {
     char c=str.charAt(i);
     if(c!=' ')
     {
       rev=rev+c;
     }
     else
     {
       p=rev.length();
       if(p>max)
       {
         max=p;
         m=rev;
       }
       if(p<mn)
       {
         mn=p;
         n=rev;
       }
       rev="";
     }
   }
   System.out.println("The smallest word is --" +n);
   System.out.println("length " +mn);
   System.out.println("The largest word is -- " +m);
   System.out.println("length "+max);
 }
}