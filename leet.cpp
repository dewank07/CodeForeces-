    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
            string ransomNote; string magazine;
            cin >> ransomNote;
            cin >> magazine;
            int i;
            cout<<int('a');
        int v[27] ={0},u[27]={0};
        
        for(int i = 0 ; i < ransomNote.length();)
        {
            v[int(ransomNote[i]) - 96];

            i++;
        }
            

        for(int i = 0 ; i < magazine.length();)
        {
            u[magazine[i] - 96]++;
            i++;
        }
        for(int i = 0 ; i <= 26; i++);
        {
                if(v[i] > u[i])
                {
                    cout<<"false";
                }   
        }

                    cout<<"true";
        return 0;

    }
