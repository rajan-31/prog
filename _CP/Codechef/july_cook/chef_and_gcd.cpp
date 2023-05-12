#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	if(b==0) return a;

	return gcd(b, a%b);
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y;
		cin>>x>>y;
		int num;
		if(x>y) {
			num=gcd(x,y);
		} else {
			num=gcd(y,x);
		}

		cout<<num<<endl;


		// if(x%2==0 && y%2==0) {
		// 	cout<<0<<"\n";
		// } else if((x%2==0 && y%2!=0) || (x%2!=0 && y%2==0)) {
		// 	cout<<1<<"\n";
		// } else {
		// 	cout<<2<<"\n";
		// }
	}

	return 0;
}