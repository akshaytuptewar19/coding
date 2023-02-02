#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int>marks;
	vector<string>students;
	vector<pair<int,string>>v;
	vector<string>ans;
	int a;
	string s;

    for(int i=0;i<N;i++){
		cin>>a;
       marks.push_back(a);
	}
	for(int i=0;i<N;i++){
		cin>>s;
		students.push_back(s);	
    }

	for(int i=0;i<N;i++){
		v.push_back({marks[i],students[i]});

		}

	 sort(v.begin(),v.end());
	ans.push_back(v[v.size()-1].second);
	ans.push_back(v[v.size()-2].second);
	ans.push_back(v[v.size()-3].second);
	
    for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<" ";
	}

}




