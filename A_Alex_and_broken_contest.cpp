#include<bits/stdc++.h>
using namespace std;
int dewDif() {
    string a;
    cin >> a;
    string b[5] = {"Danil", "Olya", "Slava", "Ann","Nikita"};
    map<string, int> m;
    m.insert({"Danil",0});
    m.insert({"Olya",0});
    m.insert({"Slava",0});
    m.insert({"Ann",0});
    m.insert({"Nikita",0});
int k=0,l=0;
for(int i = 1 ; i < a.size(); i++)
{
    if(a[i]=='_' || (a[i]>='A' && a[i]<='Z') || a[i]=='\0')
    {
        l=i;
        string r = a.substr(k,l);

    for(int j = 0 ;j < 5; j++)
     {
         if(b[j]==r)
         {
             m[r]++;

            break;
         }
     }   
     if(a[i]=='_')
        {k=l+1;}
    else{
        k=l;
    }
        
    }

}

int sum = 0;
for(int i = 0 ;i < 5; i++)
{
    
    if(b[i]==a)
    {
        m[b[i]]++;
    }
    sum+=m[b[i]];
}
if(sum==1)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}


return 0;
}

#define sf scanf
#define pf printf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    char str[105];
    int len,i,k;

    while (sf("%s",str) != EOF)
    {
        k = 0;
        len = strlen(str);

        for (i=0; i<len; i++)
        {
            if (str[i] == '_')
                continue;

            if (str[i] == 'D' && str[i+1] == 'a' && str[i+2] == 'n' && str[i+3] == 'i' && str[i+4] == 'l')
            {
                i += 4;
                ++k;
            }
            else if (str[i] == 'O' && str[i+1] == 'l' && str[i+2] == 'y' && str[i+3] == 'a')
            {
                i += 3;
                ++k;
            }
            else if (str[i] == 'S' && str[i+1] == 'l' && str[i+2] == 'a' && str[i+3] == 'v' && str[i+4] == 'a')
            {
                i += 4;
                ++k;
            }
            else if (str[i] == 'A' && str[i+1] == 'n' && str[i+2] == 'n')
            {
                i += 2;
                ++k;
            }
            else if (str[i] == 'N' && str[i+1] == 'i' && str[i+2] == 'k' && str[i+3] == 'i' && str[i+4] == 't' && str[i+5] == 'a')
            {
                i += 5;
                ++k;
            }
        }

        if (k == 1)
            pf ("YES\n");
        else
            pf ("NO\n");
    }

    return 0;
}

