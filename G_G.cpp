#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    vector<string>v(n);
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
       
            v[i].push_back(s);
        
        
       // v.push_back(s);
    }
    for(int i=0;i<n;i++){
        for(auto j:v[i])
            cout<<j;
            cout<<endl;
    }
    int a[n]={0};
    //for(int i=0;i<n;i++){
        //store[i].push_back('#');
        //if(i==n-1){
            // for(int j=0;j<v[n-1].size();j++){
            //     store[n-1].push_back(v[n-1][j]);
            // }
        //}
    //}
    
    
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<v[i+1].size();j++){
            if(v[i].size()-1==j)break;
            if(v[i][j]<v[i+1][j])continue;
            else if(v[i][j]>v[i+1][j]){
                v[i]=v[i].substr(0,j);
            }
        }
        

   }
// for(int i=n-2;i>=0;i--){
//     // for(int j=0;j<v[i+1].size();j++){
//     //         if(v[i].size()-1==j)break;
//     //         if(v[i][j]<v[i+1][j])continue;
//     //         else if(v[i][j]>v[i+1][j]){
//     //             a[i]=j;
//     //         }
//     //     }
//     //     if(a[i]!=0){
//     //         for(int j=a[i];i<v[i].size();i++){
//     //             v[i].erase(j);
//     //         }
//     //     }
// }
    cout<<5;
    for(int i=0;i<n;i++){
        for(auto j:v[i])
            cout<<j;
            cout<<endl;
    }
    return 0;
}