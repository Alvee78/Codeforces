#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0;i<n*2;i+=2){
            cout << i+1 << " ";
        }
        cout << endl;
    }
    return 0;
}