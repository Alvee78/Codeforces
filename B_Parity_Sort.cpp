#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        vector<ll>e,o;
        //cout<<t;
        // if(n==1){
        //     cin>>n;
        //     cout<<"YES"<<endl;
        //     continue;
        // }
        ll oc=0,ec=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==1){
                o.push_back(v[i]);oc++;
                //oi.push_back(i);
            }
            else{
                e.push_back(v[i]);ec++;
                //ei.push_back(i);
            }
        }
        sort(o.begin(),o.end());
        sort(e.begin(),e.end());
        //sort(ei.begin(),ei.end());
       // sort(oi.begin(),oi.end());

        // vector<ll>new_array;
        // int oo=0,ee=0;
        // for(int i=0;i<n;i++){
        //     if(i==oi[oo]){
        //         new_array.push_back(o[oo++]);
        //     }else if(i== ei[ee])
        //     {
        //         new_array.push_back(e[ee++]);
        //     }
        // }
        
        // ll flag=true;
        // //sort(v.begin(),v.end());
        // for(int i=0;i<n-1;i++){
        //     if(new_array[i]>new_array[i+1]){
        //         //cout<<"NO"<<endl;
        //         flag=false;
        //         break;
        //     }
        // }
        int cnt=0 ,io=0,ie=0 ;
        for( int i=0; i<n ; i++ ){
            if( oc==0 || ec== 0 ){
                break;
            }
            if( v[i]%2 == 1 ){
                if( o[io]>e[ie] ){
                    cnt=1;
                    break;
                }
                io++;
                oc--;
            }
        if( v[i]%2 == 0 ){
            if( e[ie] > o[io] ){
                cnt=1;
                break;
            }
            ie++;
            ec--;
        }
        
       
        
    } //cout<<t;
    if(cnt)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}