import java.util.*;
class execeptionhandle{
    Scanner sc=new Scanner(System.in);
    public static void main(String args[]) {
       
    try {  
        // int arr[]=new int[4];
        //    arr[5]=6; //ArrayIndexOutOfBoundsException
        // int a=5;
        // int b=a/0;  //ArithmeticException
        // String s="vsvws";
        // int x=Integer.parseInt(s); //NumberFormatException
        int arr[]=null;
        System.out.println(arr.length);  //NullPointerException
    
        
    } catch (ArrayIndexOutOfBoundsException e) {
        System.out.println("array index out of bound inside catch");
     }
       catch (ArithmeticException e) {
        System.out.println("ArithmeticException got");
     }
    catch (NumberFormatException e) {
        System.out.println("NumberFormatException got");
     }
    catch (NullPointerException e) {
        System.out.println("NullPointerException got");
     }
    }
  }


