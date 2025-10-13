#include <bits/stdc++.h>
using namespace std;
int main (){

    int i,n,key;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];///input

        }
cin>>key;
for(i=0; i<n; i++)
{
    
    if(arr[i]==key)/// find the index
       {cout<<i<<endl;
        break;}

        else 
        {cout << "Key not found in the array." << endl;}
}
        
            
        
        
 return 0;
}