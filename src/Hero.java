class Hero{
     int a,b;  
    Hero(){
        System.out.print("default constructor");
        
     }
     //parametrized
    Hero(int m){
       //cout<<this<<endl;  //this is pointer and its  address same as obj address
        this.a=m;
       // cout<<a<<endl;
     }
    void print(){
     //cout<<a<<endl;
     
     System.out.print(a);
    }
    //copy constructor
     Hero(Hero obj){
        System.out.print("copy const");
        
        this.b=obj.a;
        System.out.print(this.b);
     }

 public static void main(String args[]){
    Hero obj=new Hero(20);
    obj.print();
  
    Hero obj1=new Hero(obj); //copy constructor
   // obj1.print();

 }
}