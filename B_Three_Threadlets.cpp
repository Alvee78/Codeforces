#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        bool flag = true;
        if(a[1]%a[0] != 0 || a[2]%a[0] != 0){
            flag = false;
        }
        int count = 0;
        count = (a[1]/a[0])-1;
        count += (a[2]/a[0])-1;
        
        if(flag && count <= 3){
            cout<< "YES" << endl;
        }else{
            cout<< "NO" << endl;
        }
    }
    return 0;
}