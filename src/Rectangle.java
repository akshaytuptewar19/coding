import java.util.Scanner;
public class Rectangle
{
        Scanner obj=new Scanner(System.in);
        double width;
        double area;
        double length;
        String color;

       double get_length(){
        System.out.println("enter length of rectangle");
            length=obj.nextInt();
            return length;

        }
       double get_width(){
        System.out.println("enter width ");
            width=obj.nextInt();
            return width;
        }
        String get_color(){
            System.out.println("enter color ");
            color =obj.next();
            return color;
            
        }
        double area(){
            return length*width;
            //double m=length*width;
           // System.out.println(length*width);
        }
        public static void main(String args[])
        {
        Rectangle r1 =new Rectangle();
        Rectangle r2 =new Rectangle();
        r1.get_length();
        r1.get_width();
        String myStr1=r1.get_color();
        r1.area();
        r2.get_length();
        r2.get_width();
        String myStr2 =r2.get_color();
        r2.area();

        if((r1.area()==r2.area())&&(myStr1.equalsIgnoreCase(myStr2))){
            System.out.println("Maching rectangles");
        }
        else{
            System.out.println("not maching rectangles");
        }

    }
    }
