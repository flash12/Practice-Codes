import javax.swing.*;
class ATM
{
	String name;
	int accountno;
	int balamt;
	int amt;
	int money;
	public ATM()
	{	balamt=1000;	}
	
	public void deposit()
	{
		amt=Integer.parseInt(JOptionPane.showInputDialog("Enter the amount you want to deposit"));
		balamt+=amt;
	}
	public void withdraw()
	{	
		money=Integer.parseInt(JOptionPane.showInputDialog("Enter the money to be withdrawn "));
		if(money<=balamt)
			balamt-=money;
		else
			System.out.println("           NOT ENOUGH BALANCE !!!!!!!!         ");	
	}
	public void input()
	{
		name=JOptionPane.showInputDialog("Please Enter your name ");
		accountno=Integer.parseInt(JOptionPane.showInputDialog("Enter your Account number "));
			
	}
	public void Display()
	{	
		System.out.println("  Name of the account holder -  " +name);
		System.out.println("  Account Number -  " +accountno);
		
		System.out.println("  MONEY LEFT IN THE ACCOUNT -  " +balamt);		
	}
	public static void main(String as[])
	{
		ATM p=new ATM();
		while(true)
		{
			int ch=Integer.parseInt(JOptionPane.showInputDialog(" 1. Input Data\n 2. Deposit\n 3. Withdraw\n 4. Display\n 5. Exit"));
			switch(ch)
			{
				case 1:  p.input();
				 	 break;
				case 2:  p.deposit();
				 	 break;
				case 3:  p.withdraw();
				 	 break;
				case 4:  p.Display();
				 	 break;
				case 5:  System.exit(0);
				 	 break;  
			}
		}
	}
}
				
		