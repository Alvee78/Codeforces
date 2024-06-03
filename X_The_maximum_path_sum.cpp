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


ll pathSum(int i,int j,int n,int m,vector<vector<int>>&v,ll sum) {
    if(i>=n)return INT_MIN;
    if(j>=m)return INT_MIN;
    if(i == n-1 && j == m-1)return v[i][j]+sum;
    ll right = pathSum(i,j+1,n,m,v,sum+v[i][j]);
    ll down = pathSum(i+1,j,n,m,v,sum+v[i][j]);
    return max(right,down);
}

int main(){
    FIO
    int n,m;
    cin >> n >> m;
    vector<vector<int>>v(n,vector<int>(m));
    //vector<vector<bool>>v(n,vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    cout << pathSum(0,0,n,m,v,0);
    return 0;
}