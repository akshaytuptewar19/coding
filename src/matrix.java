import java.util.*;
public class matrix{
  Scanner obj=new Scanner(System.in);
    // int row=obj.nextInt();
    // int col=obj.nextInt();
    int row,col;
    int a[][]=new int[row][col];
    matrix(){
    System.out.println("enter number of rows m="); 
    int m=obj.nextInt();
    this.row=m;
    System.out.println("enter number of cols n="); 
    int n=obj.nextInt();
        this.col=n;
      }
      void get_matrix1(matrix m){
   int a[][]=new int[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            m.a[i][j]=obj.nextInt();
        }

    }
  }
  matrix addedmatrix(matrix x,matrix y){
    matrix z=new matrix();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            z.a[i][j]=x.a[i][j]+y.a[i][j];
        }
    }
    return z;
  }
  void display(matrix z){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            System.out.println(z.a[i][j]+" ");   
       }
    }
  }

  public static void main(String[] args) {
    matrix obj1 =new matrix();
    obj1.get_matrix1(obj1);
    matrix obj2 =new matrix();
    obj2.get_matrix1(obj2);
    matrix obj3 =new matrix();
    
    
    obj3 = obj3.addedmatrix(obj1,obj2);
    System.out.println(obj3.addedmatrix(obj1,obj2));  
  
  }
}

