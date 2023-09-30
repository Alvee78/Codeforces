#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k ,k1,count = 0;
        cin>> n >> k; k1= k;
        string s;
        cin>> s;
        int flag = true;

        for(int i=0;i<s.size();i++){
            if(s[i] == 'B' && flag ){
                k--;
                flag = false;
                count ++;
            }
            else if(k>0 && !flag){
                k--;
            }
            if(k == 0){
                k = k1;
                flag = true;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}