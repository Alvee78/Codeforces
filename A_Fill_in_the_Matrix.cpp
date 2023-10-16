#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int a[n][m];
        if(n==1 && m==1){
            cout<<0<<endl<<0<<endl;
            continue;
        }
        else if(n==1){
            cout<<2<<endl;
            for(int i=0;i<m;i++){
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
        }else if(m==1){
            cout<<0<<endl;
            for(int i=0;i<n;i++){
                cout<<0<<endl;
            }
            continue;
        }

        int I = 1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(I==1 && j==0){
                    I=2;
                    if(I == m){
                    I=0;
            }
                }
                
                a[i][j] = I++;
                if(I == m){
                    I=0;
                }
            }
            I = a[i][0] + 1;
            if(I == m){
                    I=0;
            }
        }
        cout<<min(n,m-1)+1<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}