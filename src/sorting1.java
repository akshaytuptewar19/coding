import java.util.*;

public class sorting1{
    Scanner obj=new Scanner(System.in);
    int n=obj.nextInt();
    Integer a[]=new Integer[n];
  
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
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n-i-1;j++){
                if(a[i]<a[j+1]){
                    int temp=a[i];
                    a[i]=a[j+1];
                    a[j+1]=temp;

                   // Collections.swap(a,a[j],a[j+1]);  
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
        Collections.reverseOrder(a);
        System.out.println(a);
        
      for(int i = 0; i < n; i++)
      {
        System.out.println(a[i]); 
      }
    }
    
     public static void main(String[] args) {
        sorting ob=new sorting();
       // ob.bubblesort();
        //ob.sortindes();
        ob.inbuilt();


        
    }
}