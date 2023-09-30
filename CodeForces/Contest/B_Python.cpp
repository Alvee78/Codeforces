#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    for (int i=1 ; i<=t ; i++){
        string str;
        long long b,r=0;
        cin >> str >> b;
        if(b<0){
            b=-b;
        }
        int j=0;
        if(str[j]=='-'){
            j=1;
        }
    for(j;j<str.size();j++){
        r=r*10+str[j]-48;
        r=r%b;
    }
    if(r==0){
        cout << "Case " << i<< ": divisible" <<endl;
    }
    else{
        cout << "Case " << i<< ": not divisible" <<endl;
    }

    }return 0;
}