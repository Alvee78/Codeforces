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
    ll n,m;
    cin >> n >> m;
    ll ans = n;
    if(m == 0){
        cout << n << endl;
        return;
    }else if(n == 0){
        ans = m;
        ll idx = 63-leadingZero(m);
        for(int i = 0; i <= idx; i++) {
            ans |= (1 << i);
        }
        cout << ans << endl;
        return;
    }else{
        if(n-m <=0){
            ans = n;
            ll idx = 63-leadingZero(n);
            for(int i = 0; i <= idx; i++) {
                ans |= (1 << i);
            }
        }else{
            ans = n;
            ll p = n-m;
            ll idxp = 63 -leadingZero(n-m);
            ll idxn = 63 - leadingZero(n);
            ll idx = idxn;
            for(int i = idxn; i >= 0; i--) {
                if((p&(1<<i)) == (n&(1<<i))){
                    continue;
                }else{
                    idxn = i;
                    break;
                }
            }
            for(int i = 0; i <= idxn; i++) {
                ans |= (1<<i);
            }
        }
        
            n = n+m;

            ll p = n-m;
            ll idxp = 63 -leadingZero(n-m);
            ll idxn = 63 - leadingZero(n);
            ll idx = idxn;
            for(int i = idxn; i >= 0; i--) {
                if((p&(1<<i)) == (n&(1<<i))){
                    continue;
                }else{
                    idxn = i;
                    break;
                }
            }
            for(int i = 0; i <= idxn; i++) {
                n |= (1<<i);
            }
            cout << (n|ans) << endl;
            
        
    }
}

int main(){
    FIO
    int t;
    cin >> t;
    // int n = 63-leadingZero(0);
    // test(n);
    //  n = 63-leadingZero(1);
    // test(n);
    while(t--)
        solve();
    return 0;
}