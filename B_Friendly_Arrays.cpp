#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a,b;
        int Xor_of_a = 0;
        for(int i=0;i<n;i++){
            cin >> a;
            Xor_of_a ^= a;
        }
        int OR_Sum = 0;
        for(int i=0;i<m;i++){
            cin >> b;
            OR_Sum |= b;
        }
        int mx,mn;
        if(n%2){
            mx = Xor_of_a | OR_Sum;
            mn = Xor_of_a;
        }else{
            mx = Xor_of_a;
            mn = Xor_of_a & ~OR_Sum;
        }
        cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}