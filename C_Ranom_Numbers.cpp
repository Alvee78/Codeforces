#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll count(string &s){

         unordered_map<char,ll> m;
            m['A']=1;
            m['B']=10;
            m['C']=100;
            m['D']=1000;
            m['E']=10000;
        ll ans=0,mx=0;
        for(int i=s.size()-1;i>=0;i--){
            if(m[s[i]]>=mx){
                ans+=m[s[i]];
                mx=m[s[i]];
            }else{
                ans-=m[s[i]];
            }
        }  
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();

        //index..........
        unordered_map<char,int> idxmn,idxmx;
        for(int i=0;i<n;i++){
            if(idxmn.find(s[i])==idxmn.end())idxmn[s[i]]=i;
            idxmx[s[i]]=max(idxmn[s[i]],i);
        }
        // for(auto i:idxmx){
        //     cout<<i.first<<"-"<<i.second<<" ";
        // }cout<<endl;
        ll ans=count(s);
        for(auto i:idxmn){
            ll idx=i.second;
            char ch=i.first;
            if(s[idx]=='A'){
                s[idx]='B';
                ans=max(ans,count(s));
                s[idx]='C';
                ans=max(ans,count(s));
                s[idx]='D';
                ans=max(ans,count(s));
                s[idx]='E';
                ans=max(ans,count(s));
                s[idx]='A';
            }else if(s[idx]=='B'){
                s[idx]='C';
                ans=max(ans,count(s));
                s[idx]='D';
                ans=max(ans,count(s));
                s[idx]='E';
                ans=max(ans,count(s));
                s[idx]='B';
            }else if(s[idx]=='C'){
                s[idx]='D';
                ans=max(ans,count(s));
                s[idx]='E';
                ans=max(ans,count(s));
                s[idx]='C';
            }else if(s[idx]=='D'){
                s[idx]='D';
                ans=max(ans,count(s));
                s[idx]='E';
                ans=max(ans,count(s));
                s[idx]='D';
            }
        }
        for(auto i:idxmx){
            ll idx=i.second;
            char ch=i.first;
            if(s[idx]=='E'){
                s[idx]='A';
                ans=max(ans,count(s));
                s[idx]='B';
                ans=max(ans,count(s));
                s[idx]='C';
                ans=max(ans,count(s));
                s[idx]='D';
                ans=max(ans,count(s));
                s[idx]='E';
            }else if(s[idx]=='D'){
                s[idx]='A';
                ans=max(ans,count(s));
                s[idx]='B';
                ans=max(ans,count(s));
                s[idx]='C';
                ans=max(ans,count(s));
                s[idx]='D';
            }else if(s[idx]=='C'){
                s[idx]='A';
                ans=max(ans,count(s));
                s[idx]='B';
                ans=max(ans,count(s));
                s[idx]='C';
            }else if(s[idx]=='B'){
                s[idx]='A';
                ans=max(ans,count(s));
                s[idx]='B';
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}