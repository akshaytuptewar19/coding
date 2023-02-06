import java.util.Scanner;
public class Rectangle1 {
	
	double length, width, area;
	String colour;
	Scanner obj=new Scanner(System.in);
	double get_length()
	{
		System.out.print("Enter the length: ");
		length = obj.nextDouble();
		return length;
	}
	double get_width()
	{
		System.out.print("Enter the width: ");
		width = obj.nextDouble();
		return width;
	}
	double get_area()
	{
		area = length*width;
        System.out.print(area);
		return area;
	}
	String get_colour()
	{
		System.out.print("Enter the colour: ");
		colour = obj.next();
		return colour;
	}
	public static void main(String[] args) {
		
		Rectangle1 r1 = new Rectangle1();
		Rectangle1 r2 = new Rectangle1();
		r1.get_length();
		r1.get_width();
		String Str1 = r1.get_colour();
		r2.get_length();
		r2.get_width();
		String Str2 = r2.get_colour();
		if((r1.get_area() == r2.get_area()) && (Str1.equalsIgnoreCase(Str2)))
		{
			System.out.println("MATCHING RECTANGLES");
		}
		else
		{
			System.out.println("NON-MATCHING RECTANGLES");
		}
	}
}