import java.util.*;
public class queue{
    public int a[];
    public int front;
    public int rear;
    public int count;
    public int capacity;

}
queue(int b){
    a=new int[b];
    capacity=b;
    front=0;
    rear=-1;
    count=0;

}
interface methods{
    int size();
    void insert();
    void pop();
    void display();
    bool isfull();
    bool isempty();
}
class queue_imp extends queue implements methods{
    Scanner sc=new Scanner(System.in);
    queue_imp(int x){
        super(x);
    }
    public int_size(){
        return count;
    }
    public boolean isfull(){
        return (size()==capacity);
    }
    public boolean isempty(){
        return (size()==0);
    }
    public boolean display(){
        return (size()==0);
    }
}
class queueop{ 
    public static void main(String[] args){

    while(true){
        System.out.println("Enter 1For=insert");
        System.out.println("Enter 2For=poping");
        System.out.println("Enter choice");
        int choice=sc.nextInt();
    switch(choice){
    case 1:
    void insert(){
        if(isfull){
            System.out.println("queue is full cant insert");
        }
        else{

            int k=sc.nextInt();
            rear++;
            a[rear]=k;
            count++;
        }
    }
    case 2:
    void pop(){
        if(isempty){
            System.out.println("queue is empty cant pop ele");
        }
        else{
            System.out.println("poping ele is:"+front);
            front++;
            count--;
        }

    }
    default :
      System.out.println("INVALID CHOICE");
    }
      char c;
      System.out.println("enter y to continue or n to exit");
      c=sc.next().charAt(0);
      if(c=='y'){
        continue;
      }
      else{
        System.out.println("exit");
        break;

      }
    }
    

}








  
 