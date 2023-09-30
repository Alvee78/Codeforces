#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,p;
    cin>>n>>p;
    int a[n+1], ans,ans2=INT32_MAX,ans1=INT32_MAX;
    ans = INT32_MAX;
    //cout<<ans;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<0;
        return 0;
    }else if(n == 2){
        if(p == a[0] || p == a[1]){
            cout<<0;
            return 0;
        }else{
            cout<<min( abs(a[0]-p),abs(a[1]-p));
            return 0;
        }
    }
    a[n]=p;
    sort(a,a+n+1);

    if(a[0]==p || a[n]==p){
        if(a[0]==p){
            cout<<abs(p-a[n-1]);
        }else{
            cout<<abs(p-a[1]);
        }
        return 0;
    }

    // removing 0 index;
    ans1 = abs(a[1]-a[n]);
    ans1+=min(abs(p-a[1]),abs(p-a[n]));
    // removing last index
    ans2 = abs(a[n-1]-a[0]);
    ans2 += min(abs(p-a[0]),abs(p-a[n-1]));
    cout<<min(ans1,ans2);

    return 0;
}