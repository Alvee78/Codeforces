#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t,a,b,c,d;
    cin>>t;
    
    //t--;
    //int n;
    while(t--){
        int n;
        cin>>n;
        n--;
        cin>>a>>b;
        int flag = a;
        for(int i=0;i<n;i++){
            cin>>c>>d;
            if(c>=a && d>=b){
                flag = -1;
            }
        }
        cout<<flag<<endl;
    }
    
    return 0;
}