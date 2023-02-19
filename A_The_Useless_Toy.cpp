#include<bits/stdc++.h>
using namespace std;
int main() {
    char a,b;
    cin >> a >> b;
    long long int t;
    cin >> t;
    if(t%2==0)
    {
        cout<<"undefined";
    }
    else
    {
        if(a=='^' && b=='>')
        {
            if(t%3==0)
            {
                cout<<"ccw";
            }
            else{
                cout<<"cw";
            }
        }
        else if(a=='>' && b=='^')
        {
            if(t%3==0)
            {
                cout<<"ccw";
            }
            else{
                cout<<"cw";
            }
        }
        else if(a=='<' && b=='v')
        {
            if(t%3==0)
            {
                cout<<"ccw";
            }
            else{
                cout<<"cw";
            }
        }
        else if(a=='v' && b=='<')
        {
            if(t%3==0)
            {
                cout<<"ccw";
            }
            else{
                cout<<"cw";
            }
        }
        else if(a=='<' && b=='^')
        {
            if(t%3==0)
            {
                cout<<"ccw";
            }
            else{
                cout<<"cw";
            }
        }
        else if(a=='^' && b=='<')
        {
            if(t%3==0)
            {
                cout<<"ccw";
            }
            else{
                cout<<"cw";
            }
        }
         else if(a=='>' && b=='v')
        {
            if(t%3==0)
            {
                cout<<"ccw";
            }
            else{
                cout<<"cw";
            }
        }
        else if(a=='v' && b=='>')
        {
            if(t%3==0)
            {
                cout<<"ccw";
            }
            else{
                cout<<"cw";
            }
        }
        
        
        
        

    }

return 0;
}



