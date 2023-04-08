#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      ll a,b;
      cin>>a>>b;
      ll ans=(ll)1e18;
      for(ll i=1;i<=100000;i++){
            ll cnt=0;
            cnt+=(a+i-1)/i;
            cnt+=(b+i-1)/i;
            cnt+=i-1;
            ans=min(ans,cnt);
      }
      cout<<ans<<"\n";
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
