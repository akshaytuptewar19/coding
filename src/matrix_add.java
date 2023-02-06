import java.util.*;
 class matrix_add{
    int a[][]=new int[10][10];
    int b[][]=new int[10][10];
    static int c[][]=new int[10][10];
    static int r1;
    static int c1;
    int r2;
    int c2;
    Scanner sc=new Scanner(System.in);
    void get_rol_col_a(){
         r1=sc.nextInt();
         c1=sc.nextInt();
    }
    void get_rol_col_b(){
         r2=sc.nextInt();
         c2=sc.nextInt();
    }
    boolean check_add_possible(){
        if(c1==r2){
        return true;
        }
        else{
            return false;
        }

    }  
  void get_matrix_a(){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            a[i][j]=sc.nextInt();

        }
    }
  }
  void get_matrix_b(){
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            b[i][j]=sc.nextInt();

        }
    }
  }
  void get_matrix_c(){
    if(check_add_possible()){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            c[i][j]=a[i][j]+b[i][j];

        }
    }
  }
  else{
    System.out.println("not poss");
  }
}
 void display(int row,int col,int c[][]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            System.out.print(c[i][j]+" ");
   }
   System.out.println();
  }
 }
public static void main(String args[]){
    matrix_add obj=new matrix_add();
    obj.get_rol_col_a();
    obj.get_rol_col_b();
    obj.check_add_possible();
    obj.get_matrix_a();
    obj.get_matrix_b();
    obj.get_matrix_c();
    obj.display(r1,c1,c);

     
 }
}
