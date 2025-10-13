#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,sum=0,last;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    while(n!=0)
    {
        last =n%10;
        sum+=last;
        n=n/10;
    }
    cout<<sum<<endl;
    return 0;
}