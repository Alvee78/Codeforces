#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,count = 0;
        cin >> n >> m;
        string a,b;
        cin >> a >> b;
        bool flag = 0;
        while (a.size()<= 100)
        {
            if(a.find(b) != string::npos){
                flag = true;
                break;
            }else{
                a = a + a;
                count ++;
            }
        }
        
        if(flag){
            cout << count << endl;
        }else{
            cout<< -1 << endl;
        }
    }
    return 0;
}