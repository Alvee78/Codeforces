#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int prev,next;
        int count = 0;
        for(int i=0;i<n;i++){
            if(i+1 == v[i])count ++;
        }
        cout<<(count+1)/2<<endl;
    }
    return 0;
}