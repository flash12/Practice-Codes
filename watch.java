import java.applet.*;
import java.awt.*;	
public class watch extends Applet implements Runnable
{
	int h,m,s;
	boolean flag=true;
	Thread t;
	public void init()
	{
		h=0; m=0; s=0;
		t=new Thread(this);	
	}
	public void start()
	{
		t.start();
	}
	public void run()
	{	try{
		while(s<60)
		{
		s++;
		repaint();
		t.sleep(250);}
		}
		catch(Exception e){}
		s=0;
		m++;
		if(m>59)
		{	m=0;
			h++; }
			run();
}
	public void paint(Graphics g)
	{
		setBackground(Color.CYAN);
		g.setColor(Color.RED);
		g.drawString("HH",200,180);
		g.drawString("MM",250,180);
		g.drawString("SS",300,180);
		g.drawString(Integer.toString(h),200,200);
		g.drawString(Integer.toString(m),250,200);
		g.drawString(Integer.toString(s),300,200);
	}
}
	