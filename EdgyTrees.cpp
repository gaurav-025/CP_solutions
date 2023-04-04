#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 200005
#define M 1000000007
vector<int> v[N+1];

void dfs(int x,vector<bool>& vis,ll& num){
      if(vis[x]) return;
      vis[x]=true;
      num++;
      for(auto &i:v[x])
      dfs(i,vis,num);
}

ll modpow(ll x,int n){
      if(n==0) return 1;
      ll u=modpow(x,n/2);
      u=((u%M)*(u%M))%M;
      if(n%2==1) u=((u%M)*(x%M))%M;
      return u;
}

void solve(){
      ll n;
      int k;
      cin>>n>>k;
      vector<bool> vis(n+1,false);
      for(int i=0;i<n-1;i++){
            int a,b,c;
            cin>>a>>b>>c;
            if(c==0){
                  v[a].push_back(b);
                  v[b].push_back(a);
            }
      }
      ll ans=modpow(n,k);
      for(int i=1;i<=n;i++){
            if(vis[i])
            continue;
            ll num=0;
            dfs(i,vis,num);
            ans=(ans-modpow(num,k)+M)%M;
      }
      cout<<ans<<"\n";
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
