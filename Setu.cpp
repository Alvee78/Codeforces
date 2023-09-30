#include <bits/stdc++.h>
using namespace std;

int main() {
  int t,l,j=1;
  cin >> t ;
  while(t--){
    cout << "Case " << j <<": "<<endl;j++;
    long long n,sum=0,m;
    string qu;
    cin >> n;
    while (n--)
    {
        cin >> qu;
        if(qu=="donate"){
            cin >> m;
            sum+=m;
        }else{
            cout << sum <<endl;
        }
    }
    
  }
  
  return 0;
}