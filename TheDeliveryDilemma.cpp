#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll mid,vector<pair<ll,ll>>& a,int n){
      vector<pair<ll,ll>>::iterator it;
      pair<ll,ll> p={mid,1e18};
      it=upper_bound(a.begin(),a.end(),p);
      if(it==a.end())
      return true;
      int i=it-a.begin();
      ll x=0;
      for(i;i<n;i++){
            x+=a[i].second;
            if(x>mid)
            return false;
      }
      return true;
}

void solve(){
      int n;
      cin>>n;
      vector<pair<ll,ll>> a(n);
      ll sum=0;
      for(int i=0;i<n;i++)
      cin>>a[i].first;
      for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            sum+=x;
            a[i].second=x;
      }
      sort(a.begin(),a.end());
      // for(auto &i:a)
      // cout<<i.first<<" "<<i.second<<"\n";
      // return;
      ll l=0,r=max(sum,a[n-1].first);
      ll ans;
      while(l<=r){
            ll mid=(l+r)/2;
            if(check(mid,a,n)){
                  ans=mid;
                  r=mid-1;
            }
            else
            l=mid+1;
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
