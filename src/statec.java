import java.util.*;
class statec{
    static int a=5;
    static int b=6;
    static void add(){
        System.out.println(a+b);
    }
    public static void main(String args[]) {
        statec obj=new statec();
        obj.add();
        System.out.println(statec.a);
        statec.add();
        
    }
}