#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int m,n;
    cin>>m>>n;
    char a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if((i+j)%2 == 0 && a[i][j] == '.'){
                a[i][j] = 'B';
            }else if(a[i][j] == '.'){
                a[i][j] = 'W';
            }
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}