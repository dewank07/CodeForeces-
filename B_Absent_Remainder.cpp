#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int b[a];
        for(int i =0 ;i<a;i++)
        {
            cin>>b[i];
        }
        int c = floor(a/2);
        sort(b,b+a);
        for(int i =a-1 ;c--;i--)
            {
                bool loop = true;
                for(int j=0;loop;j++)
                {
                    for(int k =0;i<a;i++)
                        {
                            if(b[i]%b[j]!=b[k])
                            {
                                cout<<b[i]<<" "<<b[j]<<endl;
                                loop = false;
                                break;
                            }
                       }

                }
            }       
    }


    
    return 0;
}