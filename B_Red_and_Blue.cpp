#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n;
        vector<ll>a;
        vector<ll>b;
        ll q,w,s;
        
        for(int i=0;i<n;i++){
            cin>>s;
            a.push_back(s);
        }
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>s;
            b.push_back(s);
        }
        partial_sum(a.begin(), a.end(), a.begin());
	    partial_sum(b.begin(), b.end(), b.begin());
        cout << max((ll)0, *max_element(a.begin(), a.end())) + max((ll)0, *max_element(b.begin(), b.end())) << endl;
    }
    return 0;
}