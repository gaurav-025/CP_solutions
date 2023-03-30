#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,k;
      cin>>n>>k;
      vector<ll> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      ll ans=0;
      ans+=v[n-1]-v[0];
      vector<ll> f(n-1);
      for(int i=1;i<n;i++)
      f[i-1]=v[i-1]-v[i];
      sort(f.begin(),f.end());
      for(int i=0;i<k-1;i++)
      ans+=f[i];
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

