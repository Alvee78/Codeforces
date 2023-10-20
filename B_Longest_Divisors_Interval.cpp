#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        for(int i=1; true ;i++){
            if(n%i){
                cout << i-1 << endl;
                break;
            }
        }
    }
    return 0;
}