#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int t[a];
    for(int i = 0 ; i < a ; i++)
    {
        cin >> t[i];
    }
    int sum = 0, i = 0 , j = a-1;
    int k = ceil(float(a/2));
    while(i<=j)
    {
        if(t[i]!=t[j] && (t[i]==2 || t[j]==2))
        {
            if(t[i]==1 || t[j] == 1)
            {
                sum+=c;
            }
            else if(t[i]==0 || t[j] == 0)
            {
                sum+=b;
            }
            //cout<<sum<<endl;

        }
        else if(t[i]==t[j] && (t[i]==2 && t[j]==2))
        {
            if(i!=j)
            {sum+=2*(min(b,c));}
            else
            {sum+=min(b,c);}
            

        }
        if(t[i]!=t[j] && (t[i]!=2 && t[j]!=2))
        {
            cout<<-1,exit(0);
        }
        
        i++,j--;
        
    }  

cout<<sum;
return 0;
}



