import java.util.*;
class method_construct{

int jj;
  method_construct(){
    System.out.println("default const");
  }
 method_construct(int x){  //constructor overloading
    jj=x;
    System.out.println(jj);

 }
  void sum(int a,int b){
            int sumf=a+b;
            System.out.println(sumf);
   }
   void sum(double a,int b){    //method overloading
    double sumf=a+b;
    System.out.println(sumf);
}
public static void main(String hh[]){
    Scanner sc=new Scanner(System.in);
    method_construct obj1=new method_construct(7);
    method_construct obj=new method_construct();
    int a=sc.nextInt();
    int b=sc.nextInt();
    double m=sc.nextDouble();

    obj.sum(a,b);
    obj.sum(m,b);
       
}
}