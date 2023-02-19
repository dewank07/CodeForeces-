    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin >> t; 
        while(t--)
        {
            int a,b;
            cin >> a >> b;
            int ar[a][b];
            for(int i = 0 ; i < a ; i++)
            {
                for(int j  = 0 ; j < b ; j++)
                {
                    cin >>ar[i][j];
                }
            }
            int count = 0,ind = 0;
            for(int j = 0  ; j < b-1 ; j++)
            {
                for(int i = 0 ; i < a ; i++)
                {
                    if(ar[i][ind] <= ar[i][j+1])
                    {
                        count++;
                    }
                }
                if(count==a)
                {
                    j++;
                }
                else if(count == 0)
                {
                    ind = j;
                }
                else
                {
                    cout<<-1<<endl;
                }
            }
        }

        return 0;
    }
