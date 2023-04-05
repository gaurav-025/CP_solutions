#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      ll n,x1,y1,x2,y2;
      cin>>n>>x1>>y1>>x2>>y2;
      ll ans=min(x1,min(y1,min(n+1-x1,n+1-y1)));
      ll ans1=min(x2,min(y2,min(n+1-x2,n+1-y2)));
      ans=abs(ans-ans1);

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
