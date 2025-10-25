#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
/// sort ascending
    sort (arr ,arr+n);
/// print sorted array
    for (int i = 0; i < n; i++) {
         cout<< arr[i]<<' ';
    }
    cout<<endl;
    int tar;
    cin>>tar;
    int st=0, end=n - 1;
    bool found = false;
    while (st<=end){
        int mid =(st+end)/2;
        if( tar >arr[mid])
        {
            st= mid+1;
        }
        else if (tar<arr[mid] )
        {
            end= mid-1;
        }
        else{cout <<"Element found at index:"<<mid<<endl;
        found=true;
    break;}
    }
if(!found)
cout<<"Element not found"<<endl;
    return 0;
}

