#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
    
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
  int j=k;
  int cnt2=0;
  int res = k;
  for (int i = 0; i < n; i++) {
    if(a[i]%2==0)cnt2++;  
    if (a[i] % k == 0) {
      res = 0;
    } else {
      int x = k-(a[i]%k);    
      res = min(res,x);
    }
  }
  
   
   if(j==4){
       if(cnt2>=2){
           res=0;
           
       }
       else if(cnt2==1){
           res=min(res,1);
        
       }
       else{
           res=min(res,2);
       }
   }
   
   cout<<res<<endl;
     
 } 
}