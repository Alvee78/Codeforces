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
    int n,m;
    cin >> n >> m;
    vector<ll> a(n+m+1) , b(n+m+1);
    for(int i = 0; i < n+m+1; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n+m+1; i++) {
        cin >> b[i];
    }
    vector<pair<bool,bool>>v(n+m+1);
    ll cntp=0,cntt=0,ans=0,lastp = n+m+1,lastt = n+m+1,mnpf = n+m,mntf = m+n;
    for(ll i = 0; i < n+m; i++) {
        if(cntp <n && cntt <m){
            
            if(a[i]>b[i]){
                cntp++;
                ans += a[i];
            }else{
                cntt++;
                ans += b[i];
            }
            
        }else if(cntp < n){
            ans+=a[i];
            cntp++;
        }else if(cntt < m){
            ans += b[i];
            cntt++;
        }
        //test(cntt)test(cntp)
        if(cntp == n){
            if(lastp != n+m+1 && a[i]>b[i]){
            mnpf = min(mnpf,i);
            }
            lastp = min(i,lastp);
        }
        if(cntt == m){
            if(lastt != n+m+1 && a[i]<b[i]){
            mntf = min(mntf,i);
            }
            lastt = min(i,lastt);
        }
    }
    ll tmp = ans;
    //test(lastt)test(lastp)test(mnpf)test(mntf)
    //test(tmp)
    if(n == 0){
        ans += b[n+m];
        for(int i = 0; i < n+m+1; i++) {
            cout << ans - b[i] << " ";
        }cout << endl;return;
    }else if(m == 0){
        ans += a[n+m];
        for(int i = 0; i < n+m+1; i++) {
            cout << ans - a[i] << " ";
        }cout << endl;return;
    }else{
        
        for(int i = 0; i < n+m; i++) {
            ans = tmp;
            //if(i <= lastp && i <= lastt){
                if(lastt<i){
                    ans-= a[i];
                    
                    ans += a[n+m];
                    cout << ans << " ";
                }else if(lastp < i){
                    ans-= b[i];
                    
                    ans += b[n+m];
                    
                    cout << ans << " ";
                }else{
                //
                ans = tmp;
                if(a[i]<b[i]){
                    ans-= b[i];
                    if(lastt>=lastp){
                        ans += b[n+m];
                    }else{
                        if(a[mntf]<b[mntf]){
                            if(mntf != m+n){
                            ans+= abs(a[mntf]-b[mntf]);
                            ans += a[n+m];}
                            else{
                                ans += b[n+m];
                            }
                        }else{
                            ans += b[n+m];
                        }
                    }
                    cout << ans << " ";
                }else{
                    ans-= a[i];
                    if(lastp>lastt){
                        ans += a[n+m];
                    }else{
                        if(a[mnpf]>b[mnpf]){
                            if(mnpf != m+n){
                            ans+= abs(a[mnpf]-b[mnpf]);
                            ans += b[n+m];}
                            else{
                                ans += a[n+m];
                            }
                        }else{
                            ans += a[n+m];
                        }
                    }
                    cout << ans << " ";
                }
                }
        }
    }
    cout << tmp;
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