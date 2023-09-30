#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t1;
    cin>>t1;
    while (t1--)
    {
        int n;
        cin>>n;
        if (n%2 && n!=1)cout<<-1<<endl;
        else if (n==1)cout<<1<<endl;
        else{
            int j=1;
            for(int i=n;i>1;i-=2){
                cout<<i<<" "<<j<<" ";j+=2;
            }cout<<endl;
        }
    }
    
    return 0;
}