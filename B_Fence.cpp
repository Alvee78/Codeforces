#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,k;
        cin>>n>>k;
        int a[n];
        int prevSum = 0, sum, ind = 1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i<k){
                prevSum += a[i];
            }
        }
        sum = prevSum;
        for(int i=k;i<n;i++){
            sum += a[i];
            sum -= a[i-k];
            if(sum<prevSum){
                ind = i-k+2;
                prevSum = sum;
            }
        }
        cout<<ind<<endl;
    return 0;
}