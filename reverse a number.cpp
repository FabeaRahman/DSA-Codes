#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,revnum=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    while(n!=0)
    {
       revnum=revnum*10+n%10;
        n=n/10;
    }
    cout<<revnum<<endl;
    return 0;
}