#include <bits/stdc++.h>

using namespace std;

void nestedFunc(int n) {
	static int k=0;

	if(n>0) {
		nestedFunc(n-1);
		cout<<k<<" "<<n<<endl;
		k=n;
		nestedFunc(n-1);
	}
}

int main() {
	int num = 5;
	nestedFunc(num);

	return 0;
}