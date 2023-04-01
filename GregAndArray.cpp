#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1e5+11

void solve(){
      int n,m,k;
      cin>>n>>m>>k;
      vector<ll> v(n);
      for(int i=0;i<n;i++){
            cin>>v[i];
      }
      vector<pair<pair<int,int>,ll>> a(m);
      for(int i=0;i<m;i++){
            int x,y;
            ll z;
            cin>>x>>y>>z;
            a[i]={{x-1,y-1},z};
      }
      vector<ll> sum(m+10,0);
      while(k--){
            int p,q;
            cin>>p>>q;
            p--;
            //q--;
            sum[p]++;
            sum[q]--;
      }
      for(int i=1;i<m+10;i++){
            sum[i]=sum[i-1]+sum[i];
      }
      for(int i=0;i<m;i++){
            a[i].second*=sum[i];
      }
      vector<ll> pre(n+10,0);
      for(int i=0;i<m;i++){
            int x=a[i].first.first;
            int y=a[i].first.second;
            ll z=a[i].second;
            pre[x]+=z;
            pre[y+1]-=z;
      }
      for(int i=1;i<n;i++){
            pre[i]+=pre[i-1];
      }
      for(int i=0;i<n;i++){
            v[i]+=pre[i];
            cout<<v[i]<<" ";
      }
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
