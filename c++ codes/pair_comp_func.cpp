 bool comp(pair<int,string>p1,pair<int,string>p2){  //compare function for comparing second ele of pair
     if(p1.first>p2.first){
         return 1;
     }
     else if(p1.first==p2.first){
         if(p1.second<p2.second){
             return 1;    
         }
         else{
             return 0;
         }
         
     }
     else
         return 0;
 }
class Solution {   
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>m;
        vector<pair<int,string>>v;
        for(auto it:words){
            m[it]++;
        }
        for(auto it:m){
         v.push_back({it.second,it.first});  //use {} for inserting pair in vector
       
        }
        sort(v.begin(),v.end(),comp);
        vector<string>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);  //access second ele v[i].second
        }
      return ans;
        
                                                               
                                                      
        
    }
};