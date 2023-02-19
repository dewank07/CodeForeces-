#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        int b[a], c[a], d = -1, e= -1;

        for(int i = 0 ; i < a; i++)
        {
            cin>>b[i];
        }
        for(int i = 0 ; i < a; i++)
        {
            cin>>c[i];
        }
        int k = *max_element(c,c+a);
        
        for(int i = 0 ; i < a; i++)
        {
            if(c[i]>b[i])
            {
                int temp = c[i];
                c[i] = b[i];
                b[i] = temp;
            }
        }

        
        cout<<(*max_element(b,b+a))*(*max_element(c,c+a))<<endl;
        
    } 
    
    return 0;
}


