#include<bits/stdc++.h>
using namespace std;

   int findRepeatFirstN2(string s)
{
    // this is O(N^2) method
    int p = -1, i, j,flag=0;
    for (i = 0; i < s.size(); i++)
    {
        for (j = i + 1; j < s.size(); j++)
        {
            if (s[i] == s[j])
            {
                flag++;
                break;
            }
        }
    }
 
    return flag;
}
int main()
{
    string s;
    cin>>s;
 
int k = findRepeatFirstN2(s);

    if((s.size()-k) & 1)
    {
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }




    
    return 0;
}