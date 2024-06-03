#include<bits/stdc++.h>
using namespace std;
//typedef ...
#define ll long long
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int, int>pii;
typedef pair<ll, ll>pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii>vpii;
typedef vector<pll>vpll;
typedef vector<vi>vvi;
typedef vector<vl>vvl;
typedef map<int,int>mpi;
typedef map<ll,ll>mpl;
typedef unordered_map<ll,ll>umpl;
//Fast input_output ...
#define FIO         ios::sync_with_stdio(false);cin.tie(nullptr);
#define endl        '\n'
#define en          '\n';
#define ff          first
#define ss          second
#define yes         "YES\n"
#define no          "NO\n"
#define M           1000000007
#define pb          push_back
#define all(x)      (x).begin(),(x).end()
#define all2(x)     (x).rbegin(),(x).rend()
//Built-in function ...
#define bitcount(x)             __builtin_popcountll(x);//log(n)
#define leadingZero(x)          __builtin_clzll(x);//log(n)
#define trailingZero(x)         __builtin_ctzll(x);//log(n)
#define gcd(a,b)                __gcd(a,b);
// test and input_output ...
#define test(x) cout << #x << " = " << x << "\n";
#define testa(a,n) for(int i=0;i<n;i++) cout<<a[i]<<' '; cout<<endl;
#define testv(v) for(auto i:v) cout<<i<<' '; cout<<endl;
#define testmp(m) for(auto i:m)cout<<i.first<<' '<<i.second<<' '<<endl;
#define ain(a,n) ll a[n];for(int i=0;i<n;i++){cin>>a[i];}
#define ain_and_sum(a,n,sum) ll a[n],sum=0;for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}
#define vin(v,n) vector<ll> v(n);for(int i=0;i<n;i++){cin>>v[i];}
#define vin_and_sum(v,n,sum) vector<ll> v(n);ll sum=0;for(int i=0;i<n;i++){cin>>v[i];sum+=v[i];}
//user define function ...
ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}
//constant ...
const int N = 2e5+5;
const int L = 20;
const int MX = 1e9+10;
const ll INF = 1e18;
const int dx[] = {0,-1,0,1,-1,-1,1,1};
const int dy[] = {1,0,-1,0,1,-1,-1,1};
const int dr[] = {1,-1,0,0};
const int dc[] = {0,0,1,-1};

void btoa(int n,vector<int>& v){
    while (n>0){
        v.push_back((n&1)!=0);
        n>>=1;
    }
    v.push_back(0);
    //testv(v)
}
void solve() {
    int x;
    cin >> x;
    vector<int>v,ans;
    btoa(x,v);
    ll last = 0,idx = INT_MAX,cnt = 0;
    for(ll i = 0; i < v.size(); i++) {
        if(v[i] == 0 && cnt>1){
            ans.push_back(1);
            ans[idx] = -1;
            idx = -1;
            cnt = 0;
        }else if(v[i] == 0 && cnt >= 0){
            ans.push_back(0);
            idx = -1;
            cnt == 0;
        }else if(v[i] == 1 && cnt == 0){
            ans.push_back(1);
            idx = i;
            cnt ++;
        }else if(v[i] == 1){
            ans.push_back(0);
            cnt ++;
        }
    }
    if(ans.back() == 0)ans.pop_back();
    cout << ans.size() << endl;
    for(auto i:ans)cout << i << " ";
    cout << endl;
}

int main(){
    FIO
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}