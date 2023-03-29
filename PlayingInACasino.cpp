#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      ll n,m;
      cin>>n>>m;
      vector<vector<ll>> v(n,vector<ll>(m));
      for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            cin>>v[i][j];
      }
      ll ans=0;
      for(int i=0;i<m;i++){
            vector<ll> f(n);
            ll prev;
            for(int j=0;j<n;j++){
                  f[j]=v[j][i];
            }
            sort(f.rbegin(),f.rend());
            for(int j=0;j<n;j++){
                  
                        // if(j>0 && f[j]==f[j-1])
                        // ans+=prev;
                        //else{
                              ans+=(f[j]*(n-1-2*j));
                              //prev=(f[j]*(n-1-2*j));
                       // }
                  
            }
            f.clear();
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

