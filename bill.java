class bill
{
	public static void main(String c[])
	{
		int unit=Integer.parseInt(c[0]);
                int rup,rups;
		if(unit<=100)
	 	{	rup=unit*3;
			System.out.println("The bill is " +rup); 
		}
		else if(unit<=200)
		{
			rups=unit%100;
			rup=100*3+rups*4;
			System.out.println("The bill will be " +rup);
		}
		else if(unit<=300)
		{
			rups=unit%100;
			rup=100*3+100*4+rups*5;
			System.out.println("The bill will be " +rup);
		 }
		else
		{	rups=unit%100;
			rup=100*3+100*4+100*5+rups*6;
			System.out.println("The bill will be " +rup);
		}
	}
}		