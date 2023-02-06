import java.util.*;

public class sorting{
    Scanner obj=new Scanner(System.in);
    int n=obj.nextInt();
    int a[]=new int[n];
  
    void bubblesort(){
        for(int i=0;i<n;i++){
         
             a[i]=obj.nextInt();
         }
        for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){
                
                if(a[j]>a[j+1]){
                    int temp=a[j];
                     a[j]=a[j+1];
                     a[j+1]=temp;

                }
            }
        }
        
      for(int i = 0; i < n; i++)
      {
        System.out.println(a[i]); 
      }
    }
    void sortindes(){
        for(int i=0;i<n;i++){
         
            a[i]=obj.nextInt();
        }
        for(int i=1;i<n;i++){
          for(int j=0;j<n-i;j++){
              
              if(a[j]<a[j+1]){
                  int temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;

              }
          }
      }
        
      for(int i = 0; i < n; i++)
      {
        System.out.println(a[i]); 
      }
    }
    void inbuilt(){
        for(int i=0;i<n;i++){
            a[i]=obj.nextInt();
        }
        Arrays.sort(a);
        
      for(int i = 0; i < n; i++)
      {
        System.out.println(a[i]); 
      }
    }
    
     public static void main(String[] args) {
        sorting ob=new sorting();
       // ob.bubblesort();
        ob.sortindes();
        //ob.inbuilt();


        
    }
}