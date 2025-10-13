#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, fibo1 = 0, fibo2 = 1, nextTerm;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << fibo1 << " ";
        nextTerm = fibo1 +  fibo2;
        fibo1=  fibo2;
         fibo2 = nextTerm;
    }
    return 0;
}
