import javax.swing.*;

class ABC

{

	int amount,balance,count;

	public ABC()

	{

		balance=1000;

		count=0;
	}


public void deposit()

{
	
	amount=Integer.parseInt(JOptionPane.showInputDialog("Enter the amount to be deposited:"));
			balance=amount+balance;
	
	bal();

}

public void withdraw()

{
	amount=Integer.parseInt(JOptionPane.showInputDialog("Enter the amount to be Withdraw:"));
			if(amount>balance)	
	{	JOptionPane.showMessageDialog(null, "Insufficient Balance to Withdraw");
		bal();	
	}
	else
	{
		balance=balance-amount;
	
		bal();
	}

}

public void bal()

{
	
	JOptionPane.showMessageDialog(null, "Your current balance is:" + balance);

	menu();

}
public void password()
{	
	int pass=Integer.parseInt(JOptionPane.showInputDialog("Enter the Password"));
	if(pass==123)
	{	JOptionPane.showMessageDialog(null, "Password Accepted !!!!!");
		menu();
	}
	else
	{JOptionPane.showMessageDialog(null, "Wrong Password: ");}
	if (count<2)
	{ count++;
	password(); }
	else
	JOptionPane.showMessageDialog(null, " Access Denied ");
	System.exit(0);
}
	
public void menu()

	{


		int ch;

		ch=Integer.parseInt(JOptionPane.showInputDialog("1. DEPOSIT \n2. WITHDRAWL \n3. BALANCE \n4. EXIT"));
	
		switch(ch)
	
		{
		
			case 1:

				deposit();

			case 2:
		
				withdraw();
	
			case 3:

				bal();
	
			case 4:
	
				System.exit(0);
	
		default:
		
			JOptionPane.showMessageDialog(null, "Wrong Choice");
		
			menu();

		}

	}
	

public static void main(String xyz[])

	{
	
	ABC ab=new ABC();
	
		ab.password();
	
}

} 
