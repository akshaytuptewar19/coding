import java.util.*;
class staclearn{
    static int a=5;      // ststic fun and variable only ascessible by static 
    static void fun1(){
        System.out.println(a);
    }
}
  class staticprog{  //file name must be class name which has main method
    public static void main(String[] args){
        System.out.println(staclearn.a); //using static we can ascess fun and variable without obj
        staclearn.fun1();                //static obje memory stored in global 
    }
 }


