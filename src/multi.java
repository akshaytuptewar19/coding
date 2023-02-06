import java.util.*;
interface i1{
    default void show(){
        System.out.println("hi");
    }
}
interface i2{
    default void show(){
        System.out.println("hi11");
    }
}
class multi implements i1,i2{
    public void show(){
        i1.super.show();
        i2.super.show();

    }
    public static void main(String args[]) {
        multi obj=new multi();
        obj.show();

        
    }
}