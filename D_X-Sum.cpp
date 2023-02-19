#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for ( int j = 0; j < m; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        int u=INT_MIN,sum=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
             sum=arr[i][j];
               int k=i,l=j;
               while(k+1<n && l+1<m){
                   sum+=arr[k+1][l+1];
                   k++;
                   l++;
               }
               k=i,l=j;
               while(k>0 && l>0){
                   sum+=arr[k-1][l-1];
                   k--;
                   l--;
               }
               k=i,l=j;
               while(k>0 && l+1<m){
                   sum+=arr[k-1][l+1];
                   k--;
                   l++;
               }
               k=i,l=j;
               while(k+1<n && l>0){
                   sum+=arr[k+1][l-1];
                   k++;
                   l--;
               }
            u = max(u,sum);
            }
        }
        cout<<u<<endl;
        
        
    }
    return 0;
}