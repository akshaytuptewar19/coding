#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
 
using namespace std;
using namespace __gnu_pbds;
 
// less<int> -> increasing order, greater<int>->decreasing order, less_equal<int> -> work as multiset
typedef tree<pair<long long int, long long int>, null_type, less<pair<long long int, long long int>>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// find_by_order(index) -> iterator of element at x
// order_of_key(key) -> all element strictly less than key.
 
typedef long long ll;
typedef long double ld;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef map<ll,ll>mp;
typedef vector<pair<ll, ll>> vp64;
typedef vector<vector<ll>> vv64;
typedef vector<string> vs;
typedef vector<int,string> vis;
 
#define forauto(v)        \
    for (auto i : v)      \
    {                     \
        cout << i << " "; \
    }                     \
    cout << ln;
 
#define fori(n) for (ll i = 0; i < n; i++)
#define fori1(n) for (ll i = 1; i <= n; i++)
#define forj1(n) for (ll j = 1; j <= n; j++)
#define forj(n) for (ll j = 0; j < n; j++)
#define forsn(i, s, n) for (ll i = s; i < n; i++)
#define ln "\n"
#define pb push_back
#define so(v) sort(v.begin(),v.end())
#define bs(v,f) binary_search(v.begin(),v.end(),f)
#define mod 1000000007
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define countBits(n) (log2(n) + 1)
#define maxOfVec(a) *max_element(a.begin(), a.end())
#define minOfVec(a) *min_element(a.begin(), a.end())
//Ascii 0=48,a=97,A=65
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
 
 
void solve1()
{
    ll count=0;
    string s,s1;
    ll n,m,a,b;
    getline(cin,s);
    vector<int>v={5};
    cout<<v[0]<<endl;

    
 
}
int main()
{
    // fast_cin();
    ll t = 1;
   // cin >> t;
    while (t--)
    {
 
        solve1();
    }
 
    return 0;
}