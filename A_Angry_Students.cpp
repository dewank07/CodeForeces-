#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
     
    while(t--)
    {
    
        int a;
        cin >> a;
        string b;
        cin >> b;
        
        int m = 0;
        for(int i = 0 ; i < a; )
        {
            int k = i;
            if(b[k] == 'A')
            {
                k+=1;
                int  j = 0;
                while(b[k]!='A' && k<a)
                {
                    j++;
                    k++;
                }
                m = max(m,j);  
                i = k;
            }
            else{
                i++;
            }

            
        }
        cout<<m<<endl;
    }
    return 0;   
}
 // APPAPPPAPPPP