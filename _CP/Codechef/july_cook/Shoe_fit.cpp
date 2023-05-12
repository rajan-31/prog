#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int i,j,k;
		cin>>i>>j>>k;
		if(i!=j || i!=k || k!=j)
			cout<<1<<"\n";
		else
			cout<<0<<"\n";
	}
	return 0;
}