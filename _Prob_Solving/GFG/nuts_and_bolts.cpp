// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
    
    void swap(char arr[], int a, int b) {
        char t=arr[a];
        arr[a]=arr[b];
        arr[b]=t;
    }
    
    int partition(char arr[], int lo, int hi, char pivot) {
        int i=lo;
        for(int j=lo; j<hi; j++) {
            if(arr[j]<pivot) {
                swap(arr, i, j);
                ++i;
            } else if(arr[j]==pivot) {
                swap(arr, j, hi);
                --j;
            }
        }
        swap(arr, i, hi);
        return i;
    }
    
    void quickSort(char nuts[], char bolts[], int lo, int hi) {
        if(lo<hi) {
            int pi = partition(nuts, lo, hi, bolts[hi]);
            
            partition(bolts, lo, hi, nuts[pi]);
            
            quickSort(nuts, bolts, lo, pi-1);
            quickSort(nuts, bolts, pi+1, hi);
        }
    }
    
    void matchPairs(char nuts[], char bolts[], int n) {
        quickSort(nuts, bolts, 0, n-1);
    }

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends