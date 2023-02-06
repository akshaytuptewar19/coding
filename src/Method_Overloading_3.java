public class Method_Overloading_3 {  
    	public static void main(String[] args) { 
 
    display_rollno_name obj = new display_rollno_name();  	 
    	obj.record(32475, "akshay");      // This line calls M1  	 	
        obj.record("Akshay ", 32475);      // This line calls M2 
} 
} 
class display_rollno_name{  	
    int rollno;  	
    String name; 
void record(int rollno,String name) {                    // M1 
    System.out.println("Roll No is :"+rollno+" Name:"+name); 
} 
void record(String name,int rollno) { 	                //M2 
    System.out.println("Roll No is :"+rollno+" Name:"+name); 
} 
}  
