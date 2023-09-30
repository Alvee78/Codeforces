#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,tr=1,s;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int l=-1;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(v[j]>i)c++;
            }
            if(c==i)l=c;
        }
        cout<<l<<endl;
    }
    
    return 0;
}