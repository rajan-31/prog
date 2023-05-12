#include <iostream>

#include <vector>

using namespace std;

int longestIncreasingSubsequence(vector<int>& arr, int t) {
    int n = arr.size();
    vector<int> lis(n,1);
    int maxLength = 1;
    for(int i=1; i<n; i++) {
        for(int j=0; j<i; j++) {
            if(arr[i]-arr[j]>=t) {
                lis[i] = max(lis[i],lis[j]+1);
                maxLength = max(maxLength,lis[i]);
            }
        }
    }
    return maxLength;
}

int main() {
    int n, t;
    cin>>n>>t;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<longestIncreasingSubsequence(arr,t)<<endl;
    return 0;
}
