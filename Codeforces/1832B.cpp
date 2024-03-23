#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<long long>a(n),p(n+1);
        p[0]=0;
        long long sum = 0;
        for(int i=0;i<n;i++)
        {
         cin>>a[i];
        }
        sort(a.begin(),a.end());
        
         for(int i=0;i<n;i++)
        {
         sum += a[i];
         p[i+1] = sum;
        }
        
        long long maxi = 0;
        
        for(int i=0;i<=k;i++)
        {
            maxi = max(maxi , p[n-i]-p[2*(k-i)]);
        }
        cout<<maxi<<endl;
        
    }
}