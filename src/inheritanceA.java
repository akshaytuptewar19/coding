import java.util.*;
class A{
    Scanner sc=new Scanner(System.in);
    void fun1(){
        System.out.println("IN A");
    }
}
class B extends A{
    void fun(){
        System.out.println("IN b");
    }
    super.fun1();

 }
class C extends A{
    void fun(){
        System.out.println("IN b");

    }
}
class superinheritance {
public static void main(String args[]){

    C obj=new C();
    B obj1=new B();
    obj.fun1();
    obj1.fun();

}
}


