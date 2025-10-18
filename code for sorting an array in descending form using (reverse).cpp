#include <iostream>
#include <algorithm>   // for sort() and reverse()
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);       // Step 1: sort ascending
    reverse(arr, arr + n);       // Step 2: reverse to get descending

    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";

    return 0;
}
