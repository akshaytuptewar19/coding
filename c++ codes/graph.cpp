#include <bits/stdc++.h>
using namespace std;
class graph{
    public:
    unordered_map<int,vector<int>>map;
    void addedge(int u,int v,bool direction){
        //direction 0=undirected graph
        //direction 1=directed graph

        //create edge from u to v
        map[u].push_back(v);
        if(direction==0){
            map[v].push_back(u);
        }
    }
    void printlist(){
        for(auto it:map){
            cout<<it.first<<"->";
            for(auto it1:it.second){
                cout<<it1<<",";
            }
            cout<<endl;
        }
    }
};
int main(){
    int n;
    cout<<"enter no of nodes";
    cin>>n;
    int m;
    cout<<"enter no of edges";
    cin>>m;
    graph g;
    for(int i=0;i<m;i++){
        //cretaing undirected graph
        int u,v;
        cin>>u>>v;
        g.addedge(u,v,0);
    }
    g.printlist();

}









