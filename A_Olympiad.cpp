#include<bits/stdc++.h>
using namespace std;

void sol(int a[], int n)
{
    vector<int> v(a,a+n);
    vector<int>::iterator it;
    sort(v.begin(),v.end());
    it = unique(v.begin(),v.end());
    v.resize(distance(v.begin(),it));
    int f=0;
    for(it = v.begin(); it != v.end(); ++it)
    {
        if(*it != 0)
        {
        f++;
        }
        //cout<<*it<<" ";
    }
    cout<<f;
}

int main()
{

    int t;
    cin >>t;
    int a[t];
    for(int i =0 ; i< t; i++)
    {
        cin >> a[i];
    }

    sol(a,t);

    return 0;
}