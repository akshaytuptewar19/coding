import java.io.File;
// import java.io.Filereader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
import java.io.FileNotFoundException;
class exp10{
public static void main(String[] args) {
    try{
   File f1=new File("source.txt");
   FileWriter obj=new FileWriter("source.txt");  //to write in file
   Scanner sc1=new Scanner(System.in);
   System.out.println("what do you want to write in file");
   String s2=sc1.nextLine();
   obj.write(s2);
   obj.close();
   System.out.println("written in file");
   Scanner sc=new Scanner(f1);
   while(sc.hasNextLine()){
    
       String data=sc.nextLine();
       System.out.println(data);
    }
    sc.close();
   if(f1.createNewFile()){
    System.out.println("file created");
   }
   else{
    System.out.println("file already exist");
   }
 }
   catch (IOException e) {
    System.out.println("An error occurred.");
    e.printStackTrace();
  }
//   catch (FileNotFoundException e) {
//     System.out.println("An error occurred.");
//     e.printStackTrace();
//   }
}
}

