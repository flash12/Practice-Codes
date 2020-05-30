import javax.swing.*;
class train
{
	private int Mcode;
	private String Mname;
	private int Mpop;
	private int Area;
	private float popdens;
	private float CalDen()
	{
		return Mpop/Area;
	}
	public void Enter()
	{
		Mcode=Integer.parseInt(JOptionPane.showInputDialog("Enter code"));
		Mname=JOptionPane.showInputDialog("Enter name");
		Mpop=Integer.parseInt(JOptionPane.showInputDialog("Enter Population"));
		Area=Integer.parseInt(JOptionPane.showInputDialog("Enter Area"));
		popdens=CalDen();
	}
	public void Show()
	{	
		System.out.println("Mcode " +Mcode);
		System.out.println("Name " +Mname);		
		System.out.println("Population " +Mpop);
		System.out.println("Area " +Area);
		System.out.println("Density = " +popdens);
		if(popdens>12000)
		{	System.out.println("Very populated area "); }
		else
			System.out.println(" Not too populated");
	}
	public static void main(String as[])
	{	
		train p=new train();
		p.Enter();
		p.Show();
	}
} 