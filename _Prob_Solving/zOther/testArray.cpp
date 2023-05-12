#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// void modifyArrayAgain(int arr2[], int index2, int val2) {
// 	arr2[index2]=val2;
// }

// void modifyArray(int arr[], int index, int val) {
// 	modifyArrayAgain(arr, index, val);
// }

void swap2(char arr2[], int i, int j) {
	char t = arr2[i];
	arr2[i]=arr2[j];
	arr2[j]=t;
}

void swap(char arr[]) {
	swap2(arr, 0, 1);
}

int main() {
	// int A[3] = {1, 2, 3};
	// modifyArray(A, 1, 4);

	// for(int i=0; i<3; ++i) {
	// 	cout<<A[i]<<"\t";
	// }

	char B[3] = {'a', 'b', 'c'};
	swap(B);

	// cout<<endl;
	for(int i=0; i<3; ++i) {
		cout<<B[i]<<"\t";
	}

	return 0;
}