#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0 ;i<n ;i++)
    {
    cin>>arr[i];
}
int minimum=arr[0];
for(i=0 ;i<n ;i++)
    {
        if(minimum>arr[i])
        { ///store the value in previous minimum value
        minimum=arr[i];
        }
}
cout<<minimum<<endl;
return 0;
}