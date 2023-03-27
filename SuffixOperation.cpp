#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<ll> v(n);
      for(int i=0;i<n;i++){
            cin>>v[i];
      }
      ll diff=0;
      for(int i=0;i<n-1;i++){
            diff+=(abs(v[i]-v[i+1]));
      }
      ll ans=1e18;
      ans=min(ans,diff-abs(v[0]-v[1]));
      ans=min(ans,diff-abs(v[n-1]-v[n-2]));
      for(int i=1;i<n-1;i++){
            ans=min(ans,diff-abs(v[i]-v[i+1])-abs(v[i]-v[i-1])+abs(v[i+1]-v[i-1]));
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

