import java.util.*;
 class callbyvlaue{  //java does not have call by reference bec it does not have pointer concept
    int a,b;
  
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        callbyvlaue m=new callbyvlaue();
        m.a=sc.nextInt();
        m.b=sc.nextInt();
        swap(m);               //passing obj as argument
        System.out.println("after swap a"+m.a);
        System.out.println("after swap b"+m.b);
    }
    static void swap(callbyvlaue m){ //we are using static method beacuse we have to pass obj as a parameter 
        int temp=m.a;              //here we cannot call fun using obj we passing obj to function as a parameter 
        m.a=m.b;
        m.b=temp;
        
    }
}