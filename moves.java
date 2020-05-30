import java.applet.*;
import java.awt.*;
/* <applet code = "moves" width = 400 height = 200> </applet> */
public class moves extends Applet implements Runnable
{
	int x; int y;
	int flag=1;
	Thread t;
	public void init()
	{
		x=50; y=50;
		t=new Thread(this);	
	}
	public void start()
	{
		t.start();
	}
	public void run()
	{	try{
		while(true){
		if(flag==1)
		x++; 
		else
		y++;
		if(y==500)
		{flag=0;
		x--;}
		if(y==500)
		flag=0;
		repaint();
		t.sleep(10);}
		}
		catch(Exception e){}
		run();	
}
	public void paint(Graphics g)
	{
		setBackground(Color.BLUE);
		g.setColor(Color.WHITE);
		g.fillOval(x,y,100,100);
	}
}

	