    // Online C++ compiler to run C++ program online
    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int a[n];
            map<int,int> m;
            for(int i=0;i<n;i++){
                cin>>a[i];
                m[a[i]]++;
            }
            int f=0;
            for(auto i:m){
                if(i.second>=3){
                    f++;
                    cout<<i.first<<endl;
                    break;
                }
            }
            if(!f) cout<<-1<<endl;
        }
        return 0;
    }