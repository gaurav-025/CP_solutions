#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      ll c,d;
      cin>>c>>d;
      vector<ll> v;
      set<ll> s;
      ll cnt=0;
      for(int i=1;i<=n;i++){
            ll x;
            cin>>x;
            if(s.count(x)==0)
            s.insert(x);
            else
            cnt+=c;
      }
      for(auto &i:s){
            v.push_back(i);
      }
      ll ans=1e18;
      ll x=v.size();
      for(ll i=0;i<x;i++){
            ans=min(ans,(v[i]-i-1)*d+(x-1-i)*c);
      }
      ans=min(ans,x*c+d);
      cout<<ans+cnt<<"\n";
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
