#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll x,ll n){
      if(n==0) return 1;
      ll u=power(x,n/2);
      u=u*u;
      if(n%2==1) u=u*x;
      return u;
}

void solve(){
      ll n,k;
      cin>>n>>k;
      k++;
      vector<ll> v(n);
      for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v[i]=power(10,x);
      }
      vector<ll> f(n);
      for(int i=0;i<n-1;i++){
            f[i]=(v[i+1]/v[i])-1;
      }
      ll ans=0;
      ll cnt=0;
      for(int i=0;i<n-1;i++){
            ans+=min(f[i],k-cnt)*v[i];
            cnt+=min(f[i],k-cnt);
            if(cnt==k){
                  break;
            }
      }
      if(cnt!=k){
            ans+=v[n-1]*(k-cnt);
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

