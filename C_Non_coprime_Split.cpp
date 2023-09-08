#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int n){
    
    if(n == 2) return true;
    if(n == 3) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0)return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if(r<4){
            cout<<-1<<endl;
            continue;
        }
        if(r-l>=1){
            if(r%2==0){
                cout<<r-2<<" "<<2<<endl;
            }else if(r%2==1){
                cout<<(r-3)<<" "<<2<<endl;
            }
        }else {
            //int flag = false,a=-1,b=-1;
            if(l%2==0){
                cout<<l-2<<" "<<2<<endl;
            }else{
                if (isPrime(l))cout<<-1<<endl;
                else{
                    for(int i =2;i<l;i++){
                        if(l%i==0){
                            cout<<l-i<<" "<<i<<endl;
                            break;
                        }
                    }
                }
                
            }
        }
    }
    return 0;
}