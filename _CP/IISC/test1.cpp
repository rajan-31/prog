#include <iostream>
#include <vector>
using namespace std;

vector<int> bucketFreq(int A[], int n) {
    vector<int> freq(10, 0); // initialize frequency vector

    for (int i = 0; i < n; i++) {
        // if (A[i] >= 1 && A[i] <= 10) freq[0]++;
        // else if (A[i] >= 11 && A[i] <= 20) freq[1]++;
        // else if (A[i] >= 21 && A[i] <= 30) freq[2]++;
        // else if (A[i] >= 31 && A[i] <= 40) freq[3]++;
        // else if (A[i] >= 41 && A[i] <= 50) freq[4]++;
        // else if (A[i] >= 51 && A[i] <= 60) freq[5]++;
        // else if (A[i] >= 61 && A[i] <= 70) freq[6]++;
        // else if (A[i] >= 71 && A[i] <= 80) freq[7]++;
        // else if (A[i] >= 81 && A[i] <= 90) freq[8]++;
        // else freq[9]++;
        int temp = A[i]/10;
        freq[temp]++;
    }

    return freq; // return frequency vector
}

int main() {
    int n;
    // cout << "Enter the size of array: ";
    cin >> n;
    int A[n];
    //cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vector<int> freq = bucketFreq(A, n); // get frequency vector
    //cout << "Frequency of numbers in each bucket:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << freq[i] << " ";
    }

    return 0;
}
