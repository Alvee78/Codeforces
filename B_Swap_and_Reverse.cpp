#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s,hand,shorted,even = "",odd = "";
        cin>>s;
        if(k%2 == 0){
            sort(s.begin(),s.end());
            cout<<s<<endl;
            continue;
        }
        // shorted = s;
        // sort(shorted.begin(),shorted.end());
        // map<char,int>jor,bijor,jor1,bijor1,jor2,bijor2;
        for(int i=0;i<n;i++){
            if(i%2==0){
                even += s[i];
                // if(bijor.find(s[i])==bijor.end())bijor[s[i]]=1;
                // else bijor[s[i]]++;
            }else{
                odd+=s[i];
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        
        s = "";
        for(int i=0;i<n;i++){
            if(i < even.size()){
                s += even[i];
            }
            if(i<odd.size()){
                s += odd[i];
            }
        }
        cout<<s<<endl;
        // int a[n]={-1};
        // string temp,tempjor;
        // for(auto x:bijor){
        //     for(int i=0;i<x.second;i++){ 
        //     temp.push_back(x.first);
        //     }
        // }
        // for(auto x:jor){
        //     for(int i=0;i<x.second;i++){ 
        //     tempjor.push_back(x.first);
        //     }
        // }
        

        // int ind = 0;
        // for(int i=0;i<n;i++){
            
        // }
    }
    return 0;
}