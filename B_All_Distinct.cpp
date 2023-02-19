#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int temp = a[0];
    //int arr[n] ;
    //arr[0] = temp;
    int count = 1;
    for(int i  = 1 ; i < n ; i++ )
    {
        if(a[i]!=temp)
        {
            //arr[j] = a[i];
            //j++;
            count++;
            temp = a[i];
        }
    }

    (n-count)%2==0 ? cout<<count : cout<<count-1;
    cout<<endl;

    }
}