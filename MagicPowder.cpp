#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll mid,vector<ll>& a,vector<ll>& b,ll k){
      ll cnt=0;
      for(int i=0;i<a.size();i++){
            if(mid*a[i]>b[i])
            cnt+=(mid*a[i]-b[i]);
            if(cnt>k)
            return false;
      }
      if(cnt<=k)
      return true;
      return false;
}

void solve(){
      ll n,k;
      cin>>n>>k;
      vector<ll> a(n),b(n);
      for(int i=0;i<n;i++)
      cin>>a[i];
      for(int i=0;i<n;i++)
      cin>>b[i];
      ll l=0,r=-1;
      for(int i=0;i<n;i++){
            r=max(r,(b[i]+k)/a[i]);
      }
      ll ans;
      while(l<=r){
            ll mid=(l+r)/2;
            if(check(mid,a,b,k)){
                  ans=mid;
                  l=mid+1;
            }
            else{
                  r=mid-1;
            }
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

