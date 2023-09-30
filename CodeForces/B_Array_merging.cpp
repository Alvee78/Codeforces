#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   int t;
   cin>>t;
   while(t--){
      int n;               
      cin>>n;
      vector<int> a(n),b(n);
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
      for(int i=0;i<n;i++){
         cin>>b[i];
      }
 
      map<int,int> A,B;
 
      int c=0;
      for(int i=0;i<n;i++){
         c++;
         if(i==n-1 or a[i+1]!=a[i]){
            if(A.find(a[i])==A.end()){
               A[a[i]]=c;
            }
            else{
               A[a[i]]=max(A[a[i]],c);
            }
            c=0;
         }
      }
 
      c=0;
      for(int i=0;i<n;i++){
         c++;
         if(i==n-1 or b[i+1]!=b[i]){
            if(B.find(b[i])==B.end()){
               B[b[i]]=c;
            }
            else{
               B[b[i]]=max(B[b[i]],c);
            }
            c=0;
         }
      }
 
      int ans=0;
      for(auto [key,val]:A){
         ans=max(ans,(A[key]+B[key]));
      }
      for(auto [key,val]:B){
         ans=max(ans,(A[key]+B[key]));
      }
 
      cout<<ans<<endl;
   }
   return 0;
}