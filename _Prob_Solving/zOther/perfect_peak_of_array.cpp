#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int perfectPeak(vector<int> &A) {
    int n=A.size();
    if(n==3 && A[1]>A[0] && A[1]<A[2]) return A[1];

    int max_left = A[0];
    // int min_right = A[n-1];

    for(int i=1; i<n-1; i++) {
        // int max_left = *max_element(A.begin(), A.begin()+i);
        int min_right = *min_element(A.begin()+i+1, A.end());

        if(max_left<A[i] && min_right>A[i]) {
            // cout<<A[i]<<" "<<max_left<<" "<<min_right<<"\n";
            // cout<<i<<" "<<i-1<<" "<<i+1<<" ";
            return 1;
        }

        if(max_left<A[i]) max_left=A[i];
    }
    return 0;
}

int main() {
    int n;
    cin>>n;
    vector<int> vec;
    while(n--) {
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    
    cout<<perfectPeak(vec)<<endl;
    // cout<<*max_element(vec.begin(), vec.begin()+2);
    
    return 0;
}