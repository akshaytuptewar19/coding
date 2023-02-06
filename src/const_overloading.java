public class const_overloading { 
    public static void main(String[] args) { 
    Sports_Players obj1 = new Sports_Players();  
    // Invoking Default Constructor 

    System.out.println("Details of player 1:-"); 
    System.out.println("Name of the Player :"+obj1.player_name); 

    System.out.println("Age of the Player :"+obj1.age); 
    System.out.println("Name of the Sport :"+obj1.sport_name); 

    Sports_Players obj2 = new Sports_Players(3,"Rohit","Cricket"); // Invoking Parameterized Constructor 

    System.out.println("Details of player 2:-"); 
    System.out.println("Name of the Player :"+obj2.player_name); 

    System.out.println("Age of the Player :"+obj2.age); 
    System.out.println("Name of the Sport :"+obj2.sport_name); 

} 
} class Sports_Players{ 
int age; 
String player_name; 
String sport_name; 
Sports_Players()   // Default Constructor 
{ 
 	 	 
} 
Sports_Players(int age,String player_name,String sport_name) // Parameterized Constructor 

{ 
     this.age=age; 
     this.player_name=player_name; 
     this.sport_name=sport_name; 
} 
} 
