import java.util.*;
class demo{
    
    int a=8;
    demo(int a,int b){
        a=this.a;
        b=this.b;
        int sum=a+b;
        System.out.println("sum is"+sum);
    }
    final void mul(int m,int n){
        int multipli=m*n;
    }
    void display(){
        System.out.println(multipli);
    }
}
class general{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
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