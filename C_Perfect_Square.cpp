#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>> n;
        vector<string> v(n);
        for(int i=0;i<n;i++){
            cin>> v[i];
        }
        vector<string> vc;
        vc = v;
        for(int i=0;i<n/2;i++){
            for(int j=i;j<n-1-i;j++){
                vc[i][j] = max (max(v[i][j] ,v[j][n-1-i]),max(v[n-1-i][n-1-j],v[n-1-j][i]));
                vc[j][n-1-i]= vc[i][j];
                vc[n-1-i][n-1-j]=vc[i][j];
                vc[n-1-j][i]=vc[i][j];
            }
        }
        ll count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                count += abs(vc[i][j]-v[i][j]);
            }
        }
        cout<< count << endl;
    }
    return 0;
}