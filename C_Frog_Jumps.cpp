#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin >> str;
        int n = str.size();
        int count = 0, mx = 0;
        for(int i=0;i<n;i++){
            if(str[i] != 'R'){
                count++;
            }else{
                mx = max(count,mx);
                count = 0;
            }
        }
        mx = max(count,mx);
        cout << mx+1 << endl;
    }
    return 0;
}