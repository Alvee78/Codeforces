#include <bits/stdc++.h>
using namespace std;

int main(){
  int t,n;
  vector<int> s1,s2;
  s1.push_back(1);
  s1.push_back(2);
  s2.push_back(3);
  s2.push_back(4);
  s2.push_back(5);
  swap(s1,s2);
  for(auto x:s1)
  cout<<x;
  for(auto x:s2)
  cout<<x;
   return 0; 
}
