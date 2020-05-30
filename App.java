import java.applet.*;
import java.awt.*;
public class App extends Applet
{
	public void paint(Graphics g)
	{
		setBackground(Color.GREEN);
		g.setColor(Color.BLACK);
		g.drawLine(1,635,1500,635);
		g.drawRect(100,500,150,100);
		g.drawRect(300,500,150,100);
		g.drawRect(500,500,150,100);
		g.drawRect(700,500,150,100);
		g.drawRect(900,500,150,100);
		g.drawLine(937,450,975,370);
		g.drawLine(1012,450,975,370);
		g.drawOval(100,600,35,35);
		g.drawOval(210,600,35,35);
		g.drawOval(300,600,35,35);
		g.drawOval(410,600,35,35);
		g.drawOval(500,600,35,35);
		g.drawOval(610,600,35,35);
		g.drawOval(700,600,35,35);
		g.drawOval(810,600,35,35);
		g.drawOval(900,600,35,35);
		g.drawOval(1010,600,35,35);
		g.setColor(Color.BLACK);
		g.fillOval(100,600,35,35);
		g.fillOval(210,600,35,35);
		g.fillOval(300,600,35,35);
		g.fillOval(410,600,35,35);
		g.fillOval(500,600,35,35);
		g.fillOval(610,600,35,35);
		g.fillOval(700,600,35,35);
		g.fillOval(810,600,35,35);
		g.fillOval(900,600,35,35);
		g.fillOval(1010,600,35,35);
		g.setColor(Color.CYAN);
		g.fillOval(1500,200,250,250);
		g.setColor(Color.YELLOW);
		g.fillOval(1545,255,35,35);
		g.fillOval(1675,255,35,35);
		g.fillOval(1600,325,35,15);
		g.fillOval(1590,385,55,25);
		g.setColor(Color.BLUE);
		g.fillRect(100,500,150,100);
		g.fillRect(300,500,150,100);
		g.fillRect(500,500,150,100);
		g.fillRect(700,500,150,100);
		g.fillRect(900,500,150,100);
		g.setColor(Color.RED);
		g.fillRect(937,550,75,50);
		g.setColor(Color.ORANGE);
		g.fillRect(937,450,75,50);
		
	}
}

	