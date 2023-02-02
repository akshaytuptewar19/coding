#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int>vi;
typedef vector<ll>vl;
typedef vector<bool>vb;
#define TEST ll tt; cin>>tt; while(tt--)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define loop(i, b) for (ll i = 0; i < b; i++)
#define printarr(a) for(auto i:a) cout<<i<<' ';cout<<endl;
#define all(x) (x).begin(), (x).end()
#define mod 1000000007


void solve1(){
    int n; cin >> n;
    int arr[n];
    map<int,int> mp;
    loop(i, n) {
        cin >> arr[i];
        mp[arr[i]]++;
        if(mp[arr[i]] > arr[i]){
            mp[arr[i]] = mp[arr[i]]%arr[i];
        }
    }

    for(auto& itr : mp){
        if(itr.first != itr.second){
            cout << "NO\n"; return;
        }
    }
    cout << "YES\n";
}

int main()
{
    IOS
    TEST
    solve1();
    return 0;
}