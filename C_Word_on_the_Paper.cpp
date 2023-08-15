#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        char charecter;
        vector<char>v2;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>charecter;
                if(charecter!='.'){
                    v2.push_back(charecter);
                }
            }
        }
        for(auto i:v2)
            cout<<i;
        cout<<endl;
    }
    return 0;
}