#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    int arr [4]= {6, 8, 4, 2};
    cout<<(n==0?1:arr[n%4]);
    return 0;
}