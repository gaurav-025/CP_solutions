#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      ll n,r,x;
      cin>>n>>r>>x;
      map<ll,ll> mp;
      ll sum=n*x,t=0;
      for(int i=0;i<n;i++){
            ll x,y;
            cin>>x>>y;
            t+=x;
            mp[y]+=(r-x);
      }
      if(t>=sum){
            cout<<"0\n";
            return;
      }
      ll diff=sum-t;
      ll ans=0;
      for(auto &i:mp){
            if(i.second<=diff){
                  ans+=(i.first*i.second);
                  diff-=i.second;
            }
            else{
                  ans+=i.first*diff;
                  diff=0;
            }
            if(diff<=0){
                  break;
            }
      }
      cout<<ans<<"\n";
      return;
      
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int t=1;
      //cin>>t;
      while(t--){
           solve();
      }


      return 0;
}

