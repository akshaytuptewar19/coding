  import java.awt.*; 
import javax.swing.*; 
public class Shapes extends JPanel { 
public static void main(String[] args) { 
JFrame f = new JFrame( "Experiment 11");  
f.getContentPane().add(new Shapes()); 
f.setSize(500, 500); 
f.setVisible(true); 
}
public void paint(Graphics g) { 
g.setColor(Color.RED); 
g.drawLine(150, 50, 90, 50); 
// g.setColor(Color.GREEN); 
g.drawRect(600, 100, 180, 60); 
// g.setColor(Color.BLUE); 
g.drawOval(60, 200, 180, 60);
}
}