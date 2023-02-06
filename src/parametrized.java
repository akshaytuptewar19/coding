import java.util.*;
class demo{
    int a=8;
    int b=2;
    int multiplication;
    demo(int a,int b){
       this.a=a;       //this is refering to p value not above int a=8 val
       this.b=b;       //this is refering to q value not above int b=2 val
        int sum=a+b;
        System.out.println("sum is"+sum);
    }
    final void mul(int m,int n){
        multiplication=m*n;
    }
    void display(){
        System.out.println("multiplication is"+multiplication);
    }
}
class parametrized{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        
        System.out.println("Enter p:");
        int p=sc.nextInt();
        System.out.println("Enter q:");
        int q=sc.nextInt();
        demo obj=new demo(p,q); //we have to pass argument in this creation only
        //obj.demo(p,q); //to call parametrized constructor we cant call like this
        obj.mul(p,q);
        obj.display();
    }
}