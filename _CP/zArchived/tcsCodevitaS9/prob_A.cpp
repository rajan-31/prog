#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,A,B,_;
  string s;
  cin>>n;
  
  A=count(s.begin(),s.end(),'A');
  B=count(s.begin(),s.end(),'B');
  _=n-A-B;
  cout<<"A";
  
  return 0;
}