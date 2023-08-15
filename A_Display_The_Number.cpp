#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll vtoi(vector<char> vec, int beg, int end) // vector to int
{
  ll ret = 0;
  ll mult = pow(10 , (end-beg));

  for(int i = beg; i <= end; i++) {
    ret += (vec[i] - '0') * mult;
    mult /= 10;
  }
  return ret;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<char>v;
        if(n%2){
                v.push_back('7');
                n-=3;
            }
        while (n>1)
        {
            
                v.push_back('1');
                n-=2;
            
        }
        
        for(auto i:v){
            cout<<i;
        }
        cout<<endl;
        // n = vtoi(v,0,v.size()-1-1);
        // cout<<n<<endl;
    }
    return 0;
}