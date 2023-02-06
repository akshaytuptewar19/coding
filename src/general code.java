import java.util.*;
class demo{
    Scanner sc=new Scanner(System.in);
    int a=8;
    demo(int a,int b){
        a=this.a;
        int sum=a+b;
        System.out.println("sum is"+sum);
    }
    Final void mul(int m,int n){
        int multipli=m*n;
    }
    void display(){
        System.out.println(multipli);
    }
    public static void main(String args[]){
        demo obj=new demo();
        System.out.println("Enter p:");
        int p=sc.nextInt();
        System.out.println("Enter q:");
        int q=sc.nextInt();
        obj.demo(p,q);
        obj.mul(p,q);
        obj.display();
    }
}