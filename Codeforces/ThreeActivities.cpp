

#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     int n;
     cin>>n;
     vector<int>x(n);
     vector<int>y(n);
     vector<int>z(n);
     vector<pair<int,int>>ap;
     vector<pair<int,int>>bp;
     vector<pair<int,int>>cp;
     for(int i=0;i<n;i++){
         cin>>x[i];
         ap.push_back(make_pair(x[i],i));
     }
     for(int i=0;i<n;i++){
         cin>>y[i];
         bp.push_back(make_pair(y[i],i));
     }
     for(int i=0;i<n;i++){
         cin>>z[i];
         cp.push_back(make_pair(z[i],i));
     }
     long long ans = 0;

     sort(ap.begin(),ap.end(),greater<pair<int,int>>());
     sort(bp.begin(),bp.end(),greater<pair<int,int>>());
     sort(cp.begin(),cp.end(),greater<pair<int,int>>());

     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(ap[i].second != bp[j].second && ap[i].second != cp[k].second && bp[j].second != cp[k].second)
                {   
                    long long res = ap[i].first+bp[j].first+cp[k].first;
                    ans = max(res,ans);
                }
            }
        }
        
     }
     cout<<ans<<endl;
}
}