#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d,s;
        cin>>n;
        int leftTime = INT32_MAX;
        int kCouldBe = INT32_MAX;
        int i=0;
        while (n--)
        {
            cin>>d>>s;
            s--;
            if(kCouldBe>=d)
            {
                if(i==0){
                    leftTime = s/2;
                    kCouldBe = d+ leftTime;
                    i++;
                }else{
                    kCouldBe = min (kCouldBe , d+(s/2));
                }
            }

        }
        cout<<kCouldBe<<endl;
        
    }
    return 0;
}