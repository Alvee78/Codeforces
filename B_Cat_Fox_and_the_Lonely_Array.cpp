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

bool check(ll *a,ll k,ll n,ll ans){
    ll tmp = ans ;
    int i = 1;
    while (tmp == ans)
    {
        tmp = 0;
        for(int j = i; j < i+k; j++) {
            tmp |= a[j];
        }
        i++;
        if(i == n-k+1)break;
        if(tmp != ans)return false;
    }
    return true;
}

void solve() {
    ll n;
    cin >> n;
    ain(a,n);
    ll k = 0;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ans |= a[i];
    }
    vector<ll>v;
    
    ll tmp = 0;
    int flag = false;
    for(int i = 0; i < n; i++) {
        tmp |= a[i];
        k++;
        if(tmp == ans){
             while (i != n-2)
             {
                if(a[i+1] == 0)k++;
                else break;
                i++;
             }
             break;
             
        }
        
    }
    cout << k << endl;
}

int main(){
    FIO
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}







// #include<bits/stdc++.h>
// using namespace std;
// const int maxn=1e5+9;
// int T,n;
// int a[maxn],sum=0;
// int main(){
//     scanf("%d",&T);
//     while(T--){
//             scanf("%d",&n);
//             sum=0;
//         int res=1;
//     for(int i=1;i<=n;i++)
//         scanf("%d",&a[i]),sum|=a[i];
//     for(int pos=0;pos<=19;pos++) {
//         if(((sum>>pos)&1)==0) continue;
//        int tmp=0;
//         for(int i=1;i<=n;i++) {
//             if(((a[i]>>pos)&1)==1) {
//                 res=max(res,i-tmp);
//                 tmp=i;
//             }

//         }
//         if(tmp!=0) res=max(res,n+1-tmp);
//     }
//     printf("%d\n",res);
//     }
// return 0;
// }
