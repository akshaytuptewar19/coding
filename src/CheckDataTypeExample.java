import java.util.*;  

public class CheckDataTypeExample {  
  
    public static void main(String args[]) {  
                
        int intData;  
        char charData;     
     
        Scanner sc = new Scanner(System.in);  
        
        System.out.println("Enter Integer value:");  
        intData = sc.nextInt();  
        System.out.println(intData + " is of type integer" ); 
          
        System.out.println("Enter Character value:");  
        charData = sc.next().charAt(0);  
        System.out.println(intData + " is of type char" ); 

        System.out.println("Enter Character value:");  
        string str = sc.nextline();
        System.out.println(intData + " is of type string" ); 
           
          
      
       
     }
       
    }  
