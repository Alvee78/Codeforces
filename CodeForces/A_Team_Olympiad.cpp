#include <bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<stdlib.h>
#include<limits.h>
// #include<stl_algo.h>

using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define inc(x) int x;	cin>>x;
#define printarr(x,n) for(int i=0; i<n; ++i) cout<<x[i]<<" "; cout<<endl
#define print2arr(x,n,m) for(int i=0; i<n; ++i) {for(int j=0; j<m; ++j) {cout<<x[i][j]<<" ";} cout<<endl;}  cout<<endl
// #define FOR(i, st, end) for(int i=st; i<end; ++i)
 #define For(i, st, end) for(int i=st; i<end; ++i)
// #define For(i, n) for(int i=0; i<n; ++i)
#define dv(v) for(int x:v) cout<<x<<" "; cout<<endl;
#define ceili()


#define int                     long long
#define ll                      long long
#define ld                      long double
#define endl                    "\n"
#define vi                      vector<int>
#define vpl                     vector<pair<long long ,long long>>
#define pii                     pair<int,int> 	
#define mii                     map<int,int>
#define pb                      push_back
#define ppb                     pop_back
#define ff                      first
#define ss                      second  
#define YES                     cout <<"YES"<<endl
#define yes                     cout <<"YES"<<endl
#define NO                      cout <<"NO"<<endl
#define no                      cout <<"NO"<<endl
#define MOD                     1000000007
#define INF                     LONG_MAX
#define NINF                    LONG_MIN
#define hehe                    cout<<"hehe\n"

// const int N = 50000;
// bool isPrime[N];
// vector<int> primes;


// int calcPrime(int n) {
//   int res = 0;
//   for (int i : primes) {
//     //   cout<<i<<" ";
//     if (i * i > n) {
//       break;
//     }
//     while (n % i == 0) {
//       n /= i;
//       res++;
//     }
//   }
//   if (n > 1) {
//     res++;
//   }
//   return res;
// }

ll power(long long x, long long y){
    int res = 1;     // Initialize result
    x = x % MOD; // Update x if it is more than or
                // equal to MOD
    if (x == 0) return 0; // In case x is divisible by MOD;
    while (y > 0){
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % MOD;
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % MOD;
    }
    return res;
}
ll _ceil(long long x, long long y){
    if(x%y==0){
        return x/y;
    }
    else{
        return ((x/y) + 1);
    }
}
int lcm(long long a, long long b){return (a / __gcd(a, b)) * b;}
int gcd(long long a, long long b){return __gcd(a,b);}
bool sortbysec(const pair<long long,long long> &a,const pair<long long,long long> &b){return (a.second < b.second);}
bool isPerfectSquare(long double x){
    if (x >= 0) {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
bool isPowerOfTwo(ll n){
    if(n==0)
            return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
int binarySearch(int arr[], int l, int r, int x){
    if (r >= l){
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
string xoring(string a, string b, int n){
    string ans = "";
     
    // Loop to iterate over the
    // Binary Strings
    for (int i = 0; i < n; i++)
    {
        // If the Character matches
        if (a[i] == b[i])
            ans += "0";
        else
            ans += "1";
    }
    return ans;
}
int binaryToDecimal(int n){
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}

string multiply(string num1, string num2){   
    // num2 = '2';
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
    return "0";
 
    // will keep the result number in vector
    // in reverse order
    vector<int> result(len1 + len2, 0);
 
    // Below two indexes are used to find positions
    // in result.
    int i_n1 = 0;
    int i_n2 = 0;
     
    // Go from right to left in num1
    for (int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';
 
        // To shift position to left after every
        // multiplication of a digit in num2
        i_n2 = 0;
         
        // Go from right to left in num2            
        for (int j=len2-1; j>=0; j--)
        {
            // Take current digit of second number
            int n2 = num2[j] - '0';
 
            // Multiply with current digit of first number
            // and add result to previously stored result
            // at current position.
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
 
            // Carry for next iteration
            carry = sum/10;
 
            // Store result
            result[i_n1 + i_n2] = sum % 10;
 
            i_n2++;
        }
 
        // store carry in next cell
        if (carry > 0)
            result[i_n1 + i_n2] += carry;
 
        // To shift position to left after every
        // multiplication of a digit in num1.
        i_n1++;
    }
 
    // ignore '0's from the right
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;
 
    // If all were '0's - means either both or
    // one of num1 or num2 were '0'
    if (i == -1)
    return "0";
 
    // generate the result string
    string s = "";
     
    while (i >= 0)
        s += std::to_string(result[i--]);
 
    return s;
}
/*#######################################################################################*/
// int SIZE = (10e9);
vector<int> a;
ll lengthOfLIS(vector<ll>& a)
{
    ll n = a.size();
    vector<ll> len;
    for(ll i = 0; i < n; i++)
    {
        auto lb = upper_bound(len.begin(), len.end(), a[i]);
        if(lb != len.end())
        {
            *lb = min(*lb, a[i]);
        }
        else
        {
            len.push_back(a[i]);
        }
    }
    return len.size();
}
void solve(){
    int n;
    cin>>n;
    int a[n];
    int m[3] = {0};
    For(i,0,n){
        cin>>a[i];
        m[a[i]-1]++;
        
    }
    int ans = min(m[0],min(m[1],m[2])); 
    cout<<ans<<endl;
    int count = 0;
    vi v1;
    vi v2;
    vi v3;
    For(i,0,n){
        if(count==ans) break;
        if(a[i]==1) v1.pb(i);
    }
    count = 0;
    For(i,0,n){
        if(count==ans) break;
        if(a[i]==2) v2.pb(i);
    }
    count = 0;
    For(i,0,n){
        if(count==ans) break;
        if(a[i]==3) v3.pb(i);
    }
    For(i,0,ans){
        cout<<v1[i]+1<<" "<<v2[i]+1<<" "<<v3[i]+1<<endl;
    }
    
}
// 4
// 0 1 2 3 0 1 2 3 0 1 2 3 0 1 2 3
// n-1, n-n
// 1000111
// 1010
// 0011
// 00111010
// 5 6 4 7
// 7 4 6 5
// 2a a + 2b a+b+2c a+b+c+2d
// k    k       k       k
// k/2  k/4     k/8     k/16
// 6 3
// 123456789 - 1
// 213456789
// 312456789
// 421356789
// 531246789
// 642135789
// 753124689
// 864213579
// 
// 1 x 2 3 x 
// a a+d a+d+k
// d > k
//  1 4 6 7 
//  2 5 7 8
//  3 6 8 9
//  1 5 8 10 11
//  3 2 1
// 1 10 18 25 31 36 40 43 45 46 
//  9  8  7  6  5  4  3  2  1 = len
//  46 37 29 22 16 11 7  4  2
//  45 36 28 21 15 10 6  3  1 = n
// 11 7 
//  9*10/2 = 45 + 1 = 46;
// 2 3 3 3 3 3 3 3 
// 5 6 6 6
// 11 12
// 2 3 4 5 6 = n*n-1/2 - 1
// 1 0 2 4 6 8
// n = max(a,b,c)
// ()()()() xnxnxnxnynyny
// ()()()
// (())()
// 0 0 1
// 0 1 1
// 1 2 0
// 
// min
// n = 7, s = 4
// 0 0 0 1 1 1 1
// n = 7, s = 2
// 0 0 0 0 0 1 1
// 00111100
// 5 2
// 200 10 -1000 10 20
// 100 10  25   10 20
//
// if a[0]>n
//
// 0 2 3 6 7 9 10 -86 
// 4
// 6
// -88
// 1 2 3 4 5 6 7 8 9 = 9
// 11 22 33 44 55 66 77 88 99 = 9



signed main(){
    fastio;
    // cout<<"HEJE";
    /* Seive of erathoness */

    // fill(isPrime + 2, isPrime + N, true);
    // for (int i = 2; i * i < N; i++) {
    //     for (int j = i * i; j < N; j += i) {
    //         isPrime[j] = false;
    //     }
    // }
    // for (int i = 2; i < N; i++) {
    //     if (isPrime[i]) {
    //         primes.push_back(i);
    //     }
    // }

    // comment out - (GLOBAL DEC), (CALCPRIME FUNC), (SEIVE in MAIN FUNC)

    /* Ends here */
    
    

    // cout<<"hehe\n";
	int tt = 1;
	// cin>>tt;
    // while(tt--) solve();
	For(i,0,tt){
        // cout<<"Case #"<<i+1<<": ";
        solve();
    }



}

// 1  5  (14) 6
// 7  2   8  (11)
// 9 (12) 3   15
//(13) 16 (10)  (17)    4




// marywasnosyagain - plain txt
// _____marywasnosy - key
// _arywasnosyagain - cut
// pirpumsemoystoal - 16 - a[j]
// 123456789  |

// shortkeyword - plain text
// _shortkeywor - key
// _         rd / plain text
// fzvfkdocukfu / encrypt
// 3 + 20 = 23

// {orig} + d{given} = u{encrpyt}{given}
// {orig}            = u - d
// {orig}            = r

// 0 0 1 *0 1 1 1 *0 1 0 -1	 -1 *0
// 
// s t u v w x y z a
// mod + 10
// 2*mod + 20

// a b c d e f g h i j k l 

//  2  4  5  6  7  8
//   20 18 16 14 12 10  

// s -> s+x
// n -> n+y
// s+x = n+y
// s-n = y-x = k > 0
//   k = 0 = y
//   k = y - x < 0
//   3 - 1 + 1
// s =1 , n = 3
// 4 x = 3
// x-y>0

// 4,1,2
// 4,10
// 6
// 1,2,4;
// x = 0;
// y = 2;


// 1 2 2 2 3 3
// 5 700 8 9 12 34 67 45
// 5 8 9 12 34 45
// 5 8 9 12

// 700 8 9 12 34 67 45
// 700 8 9 12 34 67 
// 8 9 12 34  
// 8 9 12 34  





// 5 700 12 34 8 9 67 45
// 700 12 34 8 9 67 45
