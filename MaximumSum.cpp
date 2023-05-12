#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,k;
      cin>>n>>k;
      vector<ll> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      sort(v.begin(),v.end());
      int a=2*k-1;
      int b=n-1;
      ll ans=0;
      ll sum=0;
      for(int i=2*k;i<n;i++){
            sum+=v[i];
      }
      ans=sum;
      while(k>0){
            sum-=v[b];
            sum+=v[a]+v[a-1];
            a-=2;
            b--;
            k--;
            ans=max(ans,sum);
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
