#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t;
	for(int i = 0; i < t; i++) {
		int a; cin >> a;
		cout << (360 % (180-a) == 0 ? "YES" : "NO") << endl;
	}
    return 0;
}