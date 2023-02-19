#include<bits/stdc++.h>
using namespace std;
int main() {

string s;
cin >> s;
int arr[s.size()];

stack<char> st;
    int i=0;
    
    while(s[i]!='\0')
    {
        char ch=s[i];
        i++;
        switch (ch)
        {
            case '(':
            st.push(ch);
                break;
            case '[':
            st.push(ch);
                break;
                
            case '{':
            st.push(ch);
                break;
                
            case ')':
                if(st.size()>0 and st.top()=='(')
                    st.pop();
                else
                    st.push(ch);
                break;
                
            case ']':
                if(st.size()>0 and st.top()=='[')
                    st.pop();
                else
                    st.push(ch);
                break;
                
            case '}':
                if(st.size()>0 and st.top()=='{')
                    st.pop();
                else
                    
                    st.push(ch);
                break;
                    
        }
    }
    cout<< st.size();
    return 0;
}