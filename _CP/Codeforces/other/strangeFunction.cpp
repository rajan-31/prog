#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long sum(long long temp) {
	if(temp==1) return 2;
	if(temp==2) return 2+3;
	if(temp==3) return 2+3+2;
	if(temp==4) return 2+3+2+3;
	if(temp==5) return 2+3+2+3+2;
	if(temp==6) return 2+3+2+3+2+4;

	// 2+3+2+3+2+4+2+3+2+3
	else if(temp%2==0) {
		return (2*temp/2)+(3*(temp/2-1))+4;
	} else {
		return (2*temp/2+1)+(3*(temp/2-1))+4;
	}
}

int main() {
	int t;
	cin>>t;

	while(t>0) {
		t--;
		long long temp;
		cin>>temp;
		cout<<sum(temp)%1000000007<<endl;
	}
}