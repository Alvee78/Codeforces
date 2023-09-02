#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s,hand,shorted;
        cin>>s;
        shorted = s;
        sort(shorted.begin(),shorted.end());
        map<char,int>jor,bijor,jor1,bijor1,jor2,bijor2;
        for(int i=0;i<n;i++){
            if(i%2){
                if(bijor.find(s[i])==bijor.end())bijor[s[i]]=1;
                else bijor[s[i]]++;
            }else{
                if(jor.find(s[i])==jor.end())jor[s[i]]=1;
                else jor[s[i]]++;
            }
        }
        for(int i=0;i<n;i++){
            if(i%2){
                bijor[shorted[i]]--;
            }else{
                jor[shorted[i]]--;
            }
        }
        int a[n]={-1};
        string temp,tempjor;
        for(auto x:bijor){
            for(int i=0;i<x.second;i++){ 
            temp.push_back(x.first);
            }
        }
        for(auto x:jor){
            for(int i=0;i<x.second;i++){ 
            tempjor.push_back(x.first);
            }
        }
        

        int ind = 0;
        for(int i=0;i<n;i++){
            
        }
    }
    return 0;
}