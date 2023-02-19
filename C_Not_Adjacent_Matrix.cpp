#include<bits/stdc++.h>
using namespace std;
int main() {


int t;
cin >> t;

while(t--)
{
    int a;
    cin >> a ;

if(a==1)
{
    cout<<"1"<<endl;
    continue;
}
else if(a==2)
{
    cout<<"-1"<<endl;
    continue;
}
else
{
    vector<int> eve;
    vector<int> odd;

    for(int i = 1 ; i <= a*a ; i++)
    {
        if(i%2==0)
        {
            eve.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }

    int z =1;
    for(int i = 0 ; i < odd.size() ; i++)
    {
        if(z<=a)
        {
        cout<<odd[i]<<" ";
        z++;
        }
        else{
            cout<<endl;
        cout<<odd[i]<<" ";

            z = 2;
            }
    }
    
    for(int i = 0 ; i < eve.size() ; i++)
    {
        if(z<=a)
        {
        cout<<eve[i]<<" ";
        z++;
        }
        else{
            cout<<endl;
        cout<<eve[i]<<" ";

            z = 2;
            }
    }
}
}







return 0;
}



