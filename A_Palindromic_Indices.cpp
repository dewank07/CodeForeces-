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
           string s;
           cin >> s;
           int count = 0 ;
           for(int i = (a-1)/2 ; i>=0 ; i--)
           {
               if(s[i] == s[(a-1)/2])
               {
                   
                    count++;
               } 
               else{
                   break;
               }
           }

    cout<< 2*count - (a&1)<<endl;
        }

        return 0;
    }
