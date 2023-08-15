#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int o=0,t_=0;
        while (n--)
        {
            int s;
            cin>>s;
            if(s==1)o++;
            else t_++;
        }
        if ((o + 2 * t_) % 2 != 0) {
    cout << "NO\n";
  } else {
    int sum = (o + 2 * t_) / 2;
    if (sum % 2 == 0 || (sum % 2 == 1 && o != 0)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
        
    }
    return 0;
}