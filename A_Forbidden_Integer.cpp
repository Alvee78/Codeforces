#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,k,x;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"YES"<<endl<<n<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else if(k==1)cout<<"NO"<<endl;
        else if (k==2){
            if(x==1 && n%2==0){
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=0;i<n/2;i++){
                        cout<<2<<" ";
                    }cout<<endl;
            }
            else if(x==1){
                cout<<"NO"<<endl;
            }
        }
        else if(x==1){
                if(n%2){
                    cout<<"YES"<<endl;
                    n-=3;
                    cout<<1+(n/2)<<endl<<3<<" ";
                    for(int i=0;i<n/2;i++){
                        cout<<2<<" ";
                    }cout<<endl;
                }
                
                else{
                    cout<<"YES"<<endl<<n/2<<endl;
                    for(int i=0;i<n/2;i++){
                        cout<<"2 ";
                    }cout<<endl;
                }
        }else{
            cout<<"YES"<<endl<<n<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
        }
    }
    return 0;
}