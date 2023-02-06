import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.FileNotFoundException;
import java.util.*;


public class filehandling {

  
    public static void main(String[] args) {
        try {
            FileWriter F2 = new FileWriter("source1txt");
            F2.write("ABCddd vkh");
            F2.close();
    
        } catch (Exception ex) {
            System.out.println("an exception was thrown"+ex);
        }


        try {
            FileReader a = new FileReader("source.txt");
            FileWriter b = new FileWriter("destination.txt");
            int c;
            while ((c=a.read())!=-1) {
                b.append((char)c);
            }
            a.close();

        } catch (Exception ez) {
            System.out.println("an exception was thrown"+ez);
        }
        
    }

   
   

   
}