#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n,maximum=0;
    cin>>n;
    int arr[n];
    for(i=0 ;i<n ;i++)
    {
    cin>>arr[i];
}

for(i=0 ;i<n ;i++)
    {
        if(maximum<arr[i]){
        maximum=arr[i];
        }
}
cout<<maximum<<endl;
return 0;
}