#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,m,a,b;
        cin>>l>>r>>m>>a>>b;
        int k=-1;
		if (a>b)swap(a,b);
		if (a+m<=r && b-m>=l)k=3;						
		if (a-m>=l||b+m<=r)k=2;
		if (b-a>=m)k=1;
		if (a==b)k=0;		
		printf("%d\n",k);
    }
    return 0;
}