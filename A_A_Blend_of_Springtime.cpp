#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    for(int i = 0 ; i < a.size() ; i++)
    {
        if(a[i]!='.')
        {
            switch(a[i])
            {
                case 'A' :
                    switch(a[i+1])
                    {
                        
                        case 'B' :
                            switch(a[i+2])
                            {
                                case 'C' :
                                cout<<"Yes";
                                return 0;    
                            }   
                        break;
                        case 'C' :
                        switch(a[i+2])
                            {
                                case 'B' :
                                cout<<"Yes";
                                return 0;    
                            }
                        break;
                    }
                break;
                case 'B' :
                    switch(a[i+1])
                    {
                        
                        case 'A' :
                            switch(a[i+2])
                            {
                                case 'C' :
                                cout<<"Yes";
                                return 0;    
                            }   
                        break;
                        case 'C' :
                        switch(a[i+2])
                            {
                                case 'A' :
                                cout<<"Yes";
                                return 0;    
                            }
                        break;
                    }
                break;
                case 'C' :

                        switch(a[i+1])
                    {
                        
                        case 'A' :
                            switch(a[i+2])
                            {
                                case 'B' :
                                cout<<"Yes";
                                return 0;    
                            }   
                        break;
                        case 'B' :
                        switch(a[i+2])
                            {
                                case 'A' :
                                cout<<"Yes";
                                return 0;    
                            }
                        break;
                    }
                break;
            }
        }
    }    
    cout<<"No";
    return 0;
}


