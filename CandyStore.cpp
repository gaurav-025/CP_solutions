#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<pair<ll,ll>> v(n);
      for(int i=0;i<n;i++){
            cin>>v[i].first;
            cin>>v[i].second;
      }
      ll lcm=v[0].second;
      ll hcf=v[0].first*v[0].second;
      int ans=1;
      for(int i=1;i<n;i++){
            hcf=__gcd(hcf,v[i].first*v[i].second);
            lcm=(lcm*v[i].second)/(__gcd(lcm,v[i].second));
            if(hcf%lcm==0){
                  continue;
            }
            else{
                  ans++;
                  hcf=v[i].first*v[i].second;
                  lcm=v[i].second;
            }
      }
      cout<<ans<<"\n";
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

