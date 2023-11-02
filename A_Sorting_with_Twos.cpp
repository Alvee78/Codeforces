#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(){
    int  n;
    cin>>n; 
    vector<int> a(n);
    for( int &x : a )
        cin>>x;
    if( n<=2 ){
        return true;
    }
    int i=2 ;
    while( i<3 && i<n-1 ){
        if( a[i]>a[i+1] ){
            return false;
        }
        i++;
    }
    i = 4 ;
    while( i<7 && i<n-1 ){
        if( a[i]>a[i+1] ){
            return false;
        }
        i++;
    }
    i = 8 ;
    while( i<15 && i<n-1 ){
        if( a[i]>a[i+1] ){
            return false;
        }
        i++;
    }
    i = 16 ;
    while( i<19 && i<n-1 ){
        if( a[i]>a[i+1] ){
            return false;
        }
        i++;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        bool flag = solve();
        if(flag){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}