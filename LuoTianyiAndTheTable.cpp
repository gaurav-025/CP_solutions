#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,m;
      cin>>n>>m;
      vector<ll> v(n*m);
      for(int i=0;i<n*m;i++)
      cin>>v[i];
      sort(v.begin(),v.end());
      ll m1,m2,M1,M2;
      m1=v[0],m2=v[1],M1=v[n*m-1],M2=v[n*m-2];
      ll ans=0;
      if(n>m){
            ans=(M1-m1)*(n*m-m)+(M2-m1)*(m-1);
            ans=max(ans,(M1-m1)*(n*m-m)+(M1-m2)*(m-1));
      }
      else{
            ans=(M1-m1)*(n*m-n)+(M2-m1)*(n-1);
            ans=max(ans,(M1-m1)*(n*m-n)+(M1-m2)*(n-1));
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
