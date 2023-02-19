    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin >> t; 
        while(t--)
        {
            long int a;
            cin >> a;
            if(a<100)
            {
                cout<<(a%10)<<endl;
                continue;
            }
            int maxa = INT_MAX,b=a;
            while(b) 
            {

                maxa = min(maxa,b%10);
                b/=10;
            }
            cout<<maxa<<endl;
            
        }

        return 0;
    }
