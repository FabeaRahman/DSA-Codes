#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;             // number of elements
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];    // array input
    }

    for (int i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] == -1)   // skip already counted
            continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;  // mark as counted
            }
        }

        cout << arr[i] << " appears " << count << " times" << endl;
    }

    return 0;
}
