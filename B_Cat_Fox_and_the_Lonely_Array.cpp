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
ll ans;
bool check(ll* a,ll mid,ll n){
    vl frebit(20);
    ll ans2 = 0;
    for(int i = 0; i < mid; i++) {
        ans2 |= a[i];
        ll x = a[i];
        for(int j = 19; j >= 0; j--) {
            if(x >= (1 << j)){
                x -= (1 << j);
                frebit[j]++;
            }
        }
    }
    if(ans != ans2)return false;
    for(int i = 0; i < n-mid; i++) {
        ll x = a[i];
        for(int j = 19; j >= 0; j--) {
            if(x >= (1 << j)){
                x -= (1 << j);
                frebit[j]--;
                if(frebit[j] == 0)ans2 -= (1 << j);
            }
        }
        x = a[i+mid];
        ans2 |= x;
        for(int j = 19; j >= 0; j--) {
            if(x >= (1 << j)){
                x -= (1 << j);
                frebit[j]++;
            }
        }
        if(ans2 != ans)return false;
    }
    return true;
}
void solve() {
    int n;
    cin >> n;
    ll a[n];
    ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        ans |= a[i];
    }
    int low = 1;
    int high = n;
    int mid = (high+low)/2;
    while (low<high)
    {
        mid = (high+low)/2;
        if(check(a,mid,n)){
            high = mid ;
        }else{
            low = mid + 1;
        }
    }
    cout << low << endl;
}

int main(){
    FIO
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}