#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--)
{

    int a;
    cin >> a;
    vector<int> v(a);
    int s=-1, srt, lst,f=1;

    for(int i = 0 ; i  < a ; i++)
    {
        cin >> v[i];

        if(v[i]==i+1)
        {

            continue;
        }
        else if(f){
            s = i+1;
            srt = i;
            f=0;
        }
    }





    if(s!=-1)
{
    for(int i = 0 ; i < a ; i++)
    {
        if(v[i]==s)
        {
            lst = i;
        }
    }
    
    reverse(v.begin()+srt, v.begin()+lst+1);
    
    }

    
    for(int i = 0 ; i < a ; i++)
    {
        cout<<v[i]<<" ";
    }
cout<<endl;
}
return 0;
}



