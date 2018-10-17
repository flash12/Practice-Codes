import javax.swing.*;
class Prime {

        public static void main(String... args) {
	int i=2;
        int num=Integer.parseInt(JOptionPane.showInputDialog("Enter the number"));
        boolean f = false;
	while(i<=num/2)
        {
            if(num % i == 0)
            {
                f= true;
                break;
            }
	    i++;
        }

        if (!f)
            System.out.println(num + " is a prime number.");
        else
            System.out.println(num + " is not a prime number.");
	
    }
}