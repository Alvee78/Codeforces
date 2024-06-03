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


void solve() {
    ll n;
    cin >> n;
    ain(a,n);
    vector<ll>b;
    b.push_back(0);
    for(int i = 1; i < n-1; i++) {
        b.push_back(__gcd(a[i],a[i+1]));
    }
    bool flag = false;
    ll cnt = 0;
    for(int i = 0; i < b.size()-1; i++) {
        if(b[i]<=b[i+1])continue;
        else {
            cnt ++;
            break;
        }
    }
    if(cnt == 0){
        cout << "YES" << endl;
        return;
    }
    b.push_back(__gcd(a[n-2],a[n-1]));

    cnt = 0;
    for(int i = 1; i < b.size()-1; i++) {
        if(b[i]<=b[i+1])continue;
        else {
            cnt ++;
            break;
        }
    }
    if(cnt == 0){
        cout << "YES" << endl;
        return;
    }
    for(int i = 1; i < b.size(); i++) {
        if(b[i]<b[i-1])cnt ++;
    }
    if(cnt > 1){
        cout << "NO" << endl;
        return;
    }
    flag = true;
    for(int i = 1; i < b.size()-1; i++) {
        if(b[i]<b[i-1]){
            if(b[i+1] >= __gcd(a[i-1],a[i+1]))cout <<"YES" << endl;
            else cout << "NO" << endl;
            return;
        }
    }


}

int main(){
    FIO
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}