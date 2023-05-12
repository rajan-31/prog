#include <bits/stdc++.h>
using namespace std;

void quicksort(vector<int> &A, int LB, int UB) {
    if (LB >= UB) return;

    int pivot = A[LB];	// Pivot
    int i = LB;		// not LB+1, because 1st inner do-while perform that
    int j = UB+1;	// not UB, because 1st do-while perform that

    do {

        do i++; while(A[i] <= pivot);
        do j--; while(A[j] > pivot);

        // both of them are in opposite and wrong grp, to fix that swap
        if(i<j) swap(A[i], A[j]);

    } while(i<j);

    swap(A[LB], A[j]);	// bring pivot to correct pos and smaller that pivot to where pivot was

    quicksort(A, LB, j-1);	// left partition, excluding pivot
    quicksort(A, j+1, UB);	// right partition, excluding pivot
}

int main() {
	vector<int> A = {5, 4, 2, 9, 8, 1, 7};
	cout<<"Unsorted:\t";
	for(auto e: A) cout<<e<<"\t";

	quicksort(A, 0, A.size()-1);

	cout<<"\nSorted:\t\t";
	for(auto e: A) cout<<e<<"\t";

	return 0;
}
