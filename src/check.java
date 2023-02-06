import java.util.*;
class check{
    Scanner sc=new Scanner(System.in);
    double le,wi,area1;
    String s;
    double get_length(){
        le=sc.nextDouble();
        return le;
    }
    double get_width(){
        wi=sc.nextDouble();
        return wi;
    }
    double area(){
        area1=le*wi;
        return area1;
    }
    String get_color(){
        s=sc.next();
        return s;
    }
    public static void main(String args[]){
        check c1=new check();
        check c2=new check();
        c1.get_length();
        c1.get_width();
        double a1=c1.area();
        String s1=c1.get_color();
        c2.get_length();
        c2.get_width();
        double a2=c2.area();
        String s2=c2.get_color();
        if((a1==a2)&&(s1.equalsIgnoreCase(s2))){
            System.out.println("MATCH");
        }
        else{
            System.out.println("NOt MATCH");
        }


        
    }
}