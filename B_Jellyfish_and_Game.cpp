#include<bits/stdc++.h>
using namespace std;
#define ll long long

void print(int* a,int sizeOfa){
    ll sum = 0;
    for(int i=0;i<sizeOfa;i++){
        sum += a[i];
    }
    cout << sum << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,k;
        cin >> a >> b >> k;
        int j[a],g[b];
        for(int i=0;i<a;i++){
            cin >> j[i];
        }
        for(int i=0;i<b;i++){
            cin >> g[i];
        }
        sort(j,j+a);
        sort(g,g+b);
        if(j[0]<g[b-1])
            swap(j[0],g[b-1]);
        if(k == 1){
            print(j,a);
            continue;
        }
        sort(j,j+a);
        sort(g,g+b);
        if(g[0] < j[a-1])
            swap(g[0],j[a-1]);
        if(k % 2 == 0){
            print(j,a);
            continue;
        }else{
            if(g[0] > j[a-1])
                swap(g[0],j[a-1]);
            print(j,a);
        }
    }
    return 0;
}