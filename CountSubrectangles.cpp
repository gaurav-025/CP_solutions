#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      ll n,m,k;
      cin>>n>>m>>k;
      vector<int> r(n);
      for(int i=0;i<n;i++)
      cin>>r[i];
      vector<int> c(m);
      for(int i=0;i<m;i++)
      cin>>c[i];
      vector<pair<ll,ll>> div;
      for(ll i=1;i*i<=k;i++){
            if(k%i==0){
                  div.push_back({i,k/i});
            }
      }
      // for(auto &i:div){
      //       cout<<i.first<<" "<<i.second<<"\n";
      // }
      // return;
      ll ans=0;
      for(auto &j:div){
            ll a=0,b=0;
            ll x=j.first;
            ll y=j.second;
            ll cnt1=0;
            for(int i=0;i<n;){
                  if(r[i]==1){
                        cnt1=0;
                        while(i<n && r[i]==1){
                              i++;
                              cnt1++;
                        }
                        if(cnt1-x+1>=0)
                        a+=(cnt1-x+1);
                  }
                  else
                  i++;
            }
            for(int i=0;i<m;){
                  if(c[i]==1){
                        cnt1=0;
                        while(i<m && c[i]==1){
                              i++;
                              cnt1++;
                        }
                        if(cnt1-y+1>=0)
                        b+=(cnt1-y+1);
                  }
                  else 
                  i++;
            }
            ans+=a*b;
            //cout<<a<<" "<<b<<"\n";
            if(x!=y){
            a=0,b=0;
            y=j.first;
            x=j.second;
            cnt1=0;
            for(int i=0;i<n;){
                  if(r[i]==1){
                        cnt1=0;
                        while(i<n && r[i]==1){
                              i++;
                              cnt1++;
                        }
                        if(cnt1-x+1>=0)
                        a+=(cnt1-x+1);
                  }
                  else
                  i++;
            }
            for(int i=0;i<m;){
                  if(c[i]==1){
                        cnt1=0;
                        while(i<m && c[i]==1){
                              i++;
                              cnt1++;
                        }
                        if(cnt1-y+1>=0)
                        b+=(cnt1-y+1);
                  }
                  else 
                  i++;
            }
            ans+=(a*b);
            }
      }
      cout<<ans;
      return;
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int t=1;
     // cin>>t;
      while(t--){
           solve();
      }


      return 0;
}
