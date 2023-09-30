#include <bits/stdc++.h>
using namespace std;

int main(){
  int t,n;
  string s;
  cin>>t;
  while (t--)
  {
    cin>>n>>s;
    cout<<(regex_match(s,regex("[mM]+[eE]+[oO]+[wW]+"))?"YES":"NO")<<endl;
  }
}
