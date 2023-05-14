#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll M=1000000007;

ll mul(ll a,ll b){
      return ((a%M)*(b%M))%M;
}

void solve(){
      ll n;
      cin>>n;
      vector<ll> a(n),b(n);
      for(int i=0;i<n;i++)
      cin>>a[i];
      for(int i=0;i<n;i++)
      cin>>b[i];
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
      vector<ll> v(n);
      for(int i=0;i<n;i++){
            ll x=b[i];
            auto it=upper_bound(a.begin(),a.end(),x);
            if(it==a.end()){
                  cout<<"0\n";
                  return;
            }
            ll l=n-(it-a.begin());
            v[i]=l;
      }
      ll ans=1;
      for(int i=0;i<n;i++){
            ans=mul(ans,v[n-1-i]-i)%M;
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
