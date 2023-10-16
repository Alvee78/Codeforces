#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin >> n >> p;
        vector< pair <int,int> > vect;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];  
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        for(int i=0;i<n;i++){
            if(b[i]<=p)
                vect.push_back(make_pair(b[i],a[i]));
        }

        if(n == 1){
            cout<< p << endl;
            continue;
        }else{
            n--;
        }
        
        sort(vect.begin(), vect.end());
        ll sum = p;
        for(auto i:vect){
            if(n<=i.second){
                sum += 1ll * n * i.first;
                n = 0;
                break;
            }else{
                n -= i.second;
                sum += 1ll * i.second * i.first;
            }
        }
        sum += 1ll * n*p;
        cout << sum <<endl;
    }
    return 0;
}