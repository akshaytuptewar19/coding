import java.util.*;
interface i1{
    boolean is_empty();
    boolean is_full();
    void enqueue();
    void dequeue();
    void display();
   }
class queue{
    public int a[];
    public int front;
    public int rear;
    public int size;
    public int capacity;
  queue(int x){
     a=new int[x];
      size=x;
      front=0;
      rear=-1;
      capacity=0;
    }
}

class queue_imple extends queue implements i1{
   static Scanner sc=new Scanner(System.in);
    queue_imple(int x){
        super(x);
    }
    public boolean is_empty(){
        if(capacity==0){
            return true;
        }
        else{
            return false;
        }
    }
    public boolean is_full(){
        if(size==capacity){
            return true;
        }
        else{
            return false;
        }
    }
    public void enqueue(){
        if(is_full()){
            System.out.println("cant insert");
        }
        else{
            System.out.println("enter num to insert");
        int x=sc.nextInt();
            rear++;
            a[rear]=x;
            capacity++;

        }
    }
    public void dequeue(){
        if(is_empty()){
            System.out.println("cant delete");
        }
        else{
            front++;
            capacity--;

        }
    }
    public void display(){
        for(int i=front;i<=rear;i++){
            System.out.println(a[i]);
        }
    }

public static void main(String args[]){
    System.out.println("enter size");
    int s=sc.nextInt();
    queue_imple obj1=new queue_imple(s);
    queue_imple obj=new queue_imple(s);
    int key;
    do{
        System.out.println("enter 1 for enque \n enter 2 for dequeue \n enter 3 for display \n enter -1 to stop");
        key=sc.nextInt();
        switch (key) {
            case 1:
                obj.enqueue();
                break;
            case 2:
              obj.dequeue();
                break;
            case 3:
              obj.display();
               break;
            default:
                break;
        }
        System.out.println("enter 1 to continue,0 to stop");
        key=sc.nextInt();
    }
    while(key==1);
}
}