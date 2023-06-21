#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<ll> v(n);
      ll sum=0;
      for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=abs(v[i]);
      }
      int cnt=0;
      int ans=0;
      for(int i=0;i<n;i++){
            if(v[i]<=0){
                  if(v[i]<0)
                  cnt++;
                  continue;
            }
            else if(i>0 && v[i]>0 && v[i-1]<=0){
                  if(cnt!=0)
                  ans++;
                  cnt=0;
            }
      }
      if(v[n-1]<=0 && cnt!=0)
      ans++;
      cout<<sum<<" "<<ans<<"\n";
      return;
      
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int t;
      cin>>t;
      while(t--){
           solve();
      }


      return 0;
}
