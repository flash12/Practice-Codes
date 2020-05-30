class factorial
{
	public static void main(String a[])
	{
		int n,fact=1;
		n=Integer.parseInt(a[0]);
		while(n!=0)
		{
			fact=fact*n;
			n--;
		}
		System.out.println("The factorial of the input number is " +fact);
	}
}