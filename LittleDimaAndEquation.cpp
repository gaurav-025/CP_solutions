#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll sum_digits(ll n){
      ll sum=0;
      while(n>0){
            sum+=n%10;
            n/=10;
      }
      return sum;
}

ll power(ll x,ll n){
      if(n==0) return 1;
      ll u=power(x,n/2);
      u=u*u;
      if(n%2==1) u=u*x;
      return u;
}

void solve(){
      ll a,b,c;
      cin>>a>>b>>c;
      vector<ll> ans;
      for(ll i=1;i<=81;i++){
            ll x=b*power(i,a)+c;
            if(x<1000000000 && sum_digits(x)==i){
                  ans.push_back(x);
            }
            else
            continue;
      }
      cout<<ans.size()<<"\n";
      for(auto &i:ans)
      cout<<i<<" ";
      return;
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int t=1;
      //cin>>t;
      while(t--){
           solve();
      }


      return 0;
}
