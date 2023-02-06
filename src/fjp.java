import java.util.*;
public class fjp {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int t,s=1;
		System.out.println("Enter the size of the queue: ");
		t=sc.nextInt();
		Queue obj= new Queue(t);
		int ch;
		while(s==1){
			System.out.println("\nEnter 1 for insert , 2 for remove and 3 for exit: ");
			ch=sc.nextInt();
			
			switch(ch) {
			case 1:
				if (obj.isFull()) {
					System.out.println("The queue is Full");
					break;
				}
				else{
					obj.insert();
					break;
				}
			case 2:
				if (obj.isEmpty()) {
					System.out.println("The queue is Empty");
					break;
				}
				else{
					obj.remove();
					break;	
				}
			case 3:
				System.out.println("Thank You");
				break;
			}
			System.out.println("\nDo you wish to continue, press 1 for yes 0 for no");
			s=sc.nextInt();
		}
	}

}
class queue{
	public int cap;
	public int front;
	public int rear;
	public int ct;
	public int a[];
	queue(int b){
		a= new int[b];
		cap=b;
		front=0;
		rear=-1;
		ct=0;
	}
}
interface Method{
	int size();
	void insert();
	void remove();
	boolean isEmpty();
	boolean isFull();
	void disp();
}
class Queue extends queue implements Method{
	Scanner sc = new Scanner(System.in);
	Queue(int x){
		super(x);
	}
	public int size() {
		return ct;
	}
	public boolean isFull() {
		return(size()==cap);
	}
	public boolean isEmpty() {
		return(size()==0);
	}
	public void insert() {
		System.out.println("Enter the number to be inserted: ");
		int n=sc.nextInt();
		rear++;
		a[rear]=n;
		ct++;
		disp();
	}
	public void remove() {
		System.out.println("The element removed: "+a[front]);
		front++;
		ct--;
		disp();
	}
	public void disp() {
		System.out.println("The Queue is: ");
		if (ct==0) {
			System.out.println("Null");
		}
		else {
		for(int i=front;i<=rear;i++) {
			System.out.print(a[i]+"  ");
		}
		}
	}	
}