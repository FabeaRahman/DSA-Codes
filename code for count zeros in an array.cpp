#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;           // number of elements
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // input array elements
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count++;    // count zeros
        }
    }

    cout << "Number of zeros: " << count << endl;
    return 0;
}
