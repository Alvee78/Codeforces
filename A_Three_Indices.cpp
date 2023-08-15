#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag = true;
        cin >> n;
        vector<int>a(n);
	    for (int i = 0; i < n; ++i)
		    cin >> a[i];
        for (int i = 1; i < n - 1; ++i) {
            if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
                cout << "YES" << endl;
                cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
                flag = false ;
                break;
            }
	}
    if(flag)
	    cout << "NO" << endl;
    }
    return 0;
}