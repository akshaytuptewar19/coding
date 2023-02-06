// Java program to demonstrate Multiple Inheritance
// through default methods

// Interface 1
interface PI1 {

	// Default keyword to initialize method
	default void show()
	{

		// Print statement if method is called
		// from interface 1
		System.out.println("Default PI1");
	}
	void dee();
}

// Interface 2
interface PI2 {

	// Default method
	default void show()
	{

		// Print statement if method is called
		// from interface 2
		System.out.println("Default PI2");
	}
}

// Main class
// Implementation class code
class multipleinheritance implements PI1 {

	// Overriding default show method
	// public void show()
	// {

	// 	// Using super keyword to call the show
	// 	// method of PI1 interface
	// 	PI1.super.show();

	// 	// Using super keyword to call the show
	// 	// method of PI2 interface
	// 	PI2.super.show();
	// }
	public void dee(){
		System.out.println("In multipleinheritance");
	}

	// Mai driver method
	public static void main(String args[])
	{

		// Creating object of this class in main() method
		multipleinheritance d = new multipleinheritance();
		d.show();
		d.dee();
	}
}
