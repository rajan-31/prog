#include<bits/stdc++.h>

using namespace std;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

#define endl "\n"
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

// int calc(float A, float B, float X) {
// 	cout<<fixed<<setprecision(2)<<ceil((B-X)/2)+ceil((X-A)/2)<<"==="<<A<<":"<<B<<":"<<X<<endl;
// 	return ceil((B-X)/2)+ceil((X-A)/2);
// }

int main(){
	boost

	int tc;
	cin>>tc;

	while(tc--) {
		int A, B;

		cin>>A>>B;

		// int sum;

		// if(A>B) {
		// 	sum=calc(A, B, B);
		// 	for(float i=B/*floor(B+A/2-1)*/; i<=A/*floor(A-A/2+1)*/; ++i) {
		// 		// cout<<A<<" "<<B<<" "<<i<<endl;
		// 		int temp=calc(A, B, i);
		// 		if (temp>sum)
		// 		{
		// 			sum=temp;
		// 		}
		// 	}
		// } else if(A<B){
		// 	sum=calc(A, B, A);
		// 	for(float i=A/*floor(A+B/2-1)*/; i<=B/*floor(B-B/2+1)*/; ++i) {
		// 		// cout<<A<<" "<<B<<" "<<i<<endl;
		// 		int temp=calc(A, B, i);
		// 		if (temp>sum)
		// 		{
		// 			sum=temp;
		// 		}
		// 	}
		// } else {
		// 	sum=calc(A, A, A);
		// }


		if(A<B) {
			int X=A+1;
			int num1=B-X, num2=X-A;

			cout<<(num1+2-1)/2+(num2+2-1)/2<<endl;
		} else if(A>B) {
			int X=B+1;
			int num1=B-X, num2=X-A;

			cout<<(num1+2-1)/2+(num2+2-1)/2<<endl;
		} else {
			cout<<0<<endl;
		}

		// cout<<sum<<"\n";
	}

	return 0;
}