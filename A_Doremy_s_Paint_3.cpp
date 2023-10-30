#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        bool flag = true;
        int x = -1;
        int y = -1;
        int cntx = 0;
        int cnty = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(x == -1 || x==a[i]){
                x=a[i];
                cntx++;
            }else if(y== -1 || y==a[i]){
                y=a[i];
                cnty++;
            }else{
                flag = false;
            }
        }
        //sort(a,a+n);
        
        
        
        if(cntx==n || cnty==n){
            cout<<"Yes"<<endl;
        }else if((cntx==n/2 && cnty==(n-n/2))||(cntx==n-n/2 && cnty==n/2)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<< "No" <<endl;
        }
    }
    return 0;
}