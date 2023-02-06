import java.util.*;
abstract class A{  //abstraction is implementation hiding
    abstract void fun();  //user dont know which fun is called we hinding imple form user by abstraction
    void fun2(){
        System.out.println("IN abstract");
    }
}
class B extends A{
    void fun(){
        System.out.println("IN B");
    }
   
}
class C extends A{
    void fun(){
        System.out.println("IN C");
    }
    void fun2(){
        System.out.println("IN C");
    }
}
class abstractinfo{
    public static void main(String args[]){
       // A.fun();  //we cannot call abstract fun bac it has no body
       B objb=new B();
       C objc=new C();
       objb.fun();  //call b fun bec abstraction A has no fun body
       objb.fun2(); //call A fun2 bec inheritance
       objc.fun2(); //class c & a has fun2 but we created obj of class c so it call for class c fun2

}
}