#include <bits/stdc++.h>
using namespace std;

int main(){
  set<pair<int ,int>>s;
  pair<int ,int>a;
  a.first=5,a.second=6;
  s.insert(a);
  a.first=4;a.second=6;
  s.insert(a);
  set<pair<int ,int>>:: iterator it;
  it=s.begin();
  cout<<it.first<endl;
   return 0; 
}
