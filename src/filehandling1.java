import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.FileNotFoundException;
import java.util.*;
import java.util.TreeMap;  
import java.util.Iterator;  


public class filehandling1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);     
    //source1txt
    //source2txt
        HashMap<String,ArrayList<Integer>> hash_map = new HashMap<String,ArrayList<Integer>>();
     
        try {
            System.out.println("How many files do you have");
            int a=sc.nextInt();

            for(int j=1;j<=a;j++){
            System.out.println("Enter file name ");
            String ss=sc.next();

            File F3 = new File(ss);
            Scanner obj = new Scanner(F3);
       
            while (obj.hasNextLine()) {
                String s = obj.nextLine();
                String s1="";

                for(int i=0;i<s.length();i++){
                 if((s.charAt(i)>='a'&&s.charAt(i)<='z')||(s.charAt(i)>='A'&&s.charAt(i)<='Z')){
                    if(s.charAt(i)!=' '){
                        s1+=(s.charAt(i));
                    }
                   if(i==s.length()-1){
                if(!(hash_map.containsKey(s1.toLowerCase()))){  //add ele if map does not have it
                    ArrayList<Integer>Arr= new ArrayList<Integer>();
                        Arr.add(j);
                        hash_map.put(s1.toLowerCase(),Arr);
                        s1="";
                     }
                    else{  //array index
                        ArrayList<Integer>Arr2= new ArrayList<Integer>();
                        Arr2=hash_map.get(s1.toLowerCase());
                        boolean b=false;
                        for(int m=0;m<Arr2.size();m++){
                            if(Arr2.get(m)==j){
                                b=true;
                            }
                        }
                        
                           if(b!=true){
                               Arr2.add(j);
                               hash_map.put(s1.toLowerCase(),Arr2);
                                s1="";
                            }
                            else{
                                s1="";
                            }
                    }
                        
                    }

                  } 
                    else{
                        ArrayList<Integer>Arr= new ArrayList<Integer>();
                        if(!(hash_map.containsKey(s1.toLowerCase()))){
                            Arr.add(j);
                            hash_map.put(s1.toLowerCase(),Arr);
                            s1="";
                            
                        }
                        else{ //for ele file number
                            ArrayList<Integer>Arr2= new ArrayList<Integer>();
                            Arr2=hash_map.get(s1.toLowerCase());
                            boolean b=false;
                            for(int m=0;m<Arr2.size();m++){
                                if(Arr2.get(m)==j){
                                    b=true;
                                }
                            }
                            if(b!=true){
                                   Arr2.add(j);
                                   hash_map.put(s1.toLowerCase(),Arr2);
                                   s1="";
                            }
                            else{
                                s1="";
                            }
                        
                    }
                
             
              
               }
            }
          }
               
            
        }
        
    }
         
        catch (Exception ey) {
            System.out.println("an exception was thrown"+ey);
        } 
        hash_map.remove("in");
        hash_map.remove("or");
        hash_map.remove("and");
        hash_map.remove("&");
        hash_map.remove("of");
        hash_map.remove("to");
        hash_map.remove("is");
        hash_map.remove("the");
        hash_map.remove("a");
        hash_map.remove("or");
        hash_map.remove("are");
         hash_map.remove("");
         
        try {
            System.out.println("Enter file name to store words");
            String fin=sc.next();
            FileWriter F2 = new FileWriter(fin);
            TreeMap<String,ArrayList<Integer>> tm=new  TreeMap<String,ArrayList<Integer>> (hash_map);  
             Iterator itr=tm.keySet().iterator();               
         while(itr.hasNext())    
         {    
             String key=(String)itr.next();  
             F2.write(key+hash_map.get(key));  
             F2.append('\n');
         }   
            F2.close();
    
        } catch (Exception ex) {
            System.out.println("an exception was thrown"+ex);
        }

    }

   
   

   
}