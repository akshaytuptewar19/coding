import java.awt.*; 
public class AWTExamplel extends Frame { 
    AWTExample1() { 
     Button b = new Button("Hello!!"); 
      b.setBounds (60,120, 60, 30); 
        add(b);
         setsize(300, 300);
        setTitle("This is the basic AWT example");
        setLayout(null); 
        setVisible(true) ; 
    } 
            public static void main(String args[]) { 
           AWTExample1 f = new AWTExample1(); 
            }
        }