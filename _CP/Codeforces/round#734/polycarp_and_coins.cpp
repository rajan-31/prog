#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	int n;
	cin>>n;
	//////////////
	int c1=n/3;
	int c2=(n-c1)/2;
	if(c1+2*c2!=n) c1++;
	cout<<c1<<" "<<c2<<endl;
	/////////////
	}

	return 0;
}