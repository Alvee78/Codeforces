#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,k;
        cin>>n>>k;
        int a[n];
        int sum = 0, ind = 1, s;
        for(int i=0;i<n;i++){
            cin>>s;
            if(i == 0)a[0] = s;
            else
                a[i] = s + a[i-1];
        }
        sum = a[k-1];
        for(int i=k;i<n;i++){
            if(a[i]-a[i-k] < sum){
                sum = a[i]-a[i-k];
                ind = i - k + 2;
            }
        }
        cout<<ind<<endl;
    return 0;
}