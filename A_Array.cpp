    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
     
        vector<int> neg,pos,ze;
        int a;
        cin>> a;
        for(int i  = 0 ; i < a ; i++)
        {
            int b;
            cin >> b;
            if(b==0)
            {
                ze.push_back(b);
            }
            else if(b>0)
            {
                pos.push_back(b);
            }
            else{
                neg.push_back(b);
            }
        }
        if(pos.size()==0)
        {
            pos.push_back(neg.back()),neg.pop_back();
            pos.push_back(neg.back()),neg.pop_back();
        }
        if(neg.size()%2==0)
        {
            ze.push_back(neg.back()),neg.pop_back();
        }

        cout<<neg.size()<<" ";
        for(int i =0 ; i < neg.size();i++)
        {
            cout<<neg[i]<<" ";
        }
        cout<<endl;

        cout<<pos.size()<<" ";
        for(int i =0 ; i < pos.size();i++)
        {
            cout<<pos[i]<<" ";
        }
        cout<<endl;

        cout<<ze.size()<<" ";
        for(int i =0 ; i < ze.size();i++)
        {
            cout<<ze[i]<<" ";
        }
        cout<<endl;

     return 0;   
    }