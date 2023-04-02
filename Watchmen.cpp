#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      unordered_map<ll,ll> mpx,mpy;
      map<pair<ll,ll>,ll> mp;
      while(n--){
            ll x,y;
            cin>>x>>y;
            mpx[x]++;
            mpy[y]++;
           mp[{x,y}]++;
      }
      ll ans=0;
      for(auto &i:mpx){
            ans+=(i.second*(i.second-1))/2;
      }
      for(auto &i:mpy){
            ans+=(i.second*(i.second-1))/2;
      }
      for(auto &i:mp){
            ans-=(i.second*(i.second-1))/2;
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
