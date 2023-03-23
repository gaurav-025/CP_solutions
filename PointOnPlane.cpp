#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      ll n;
      cin>>n;
      ll l=1,r=1e9;
      ll ans;
      while(l<=r){
            ll mid=(l+r)/2;
            if(mid*mid==n){
                  ans=mid;
                  break;
            }
            else if(mid*mid>n){
                  r=mid-1;
            }
            else{
                  ans=mid;
                  l=mid+1;
            }
      }
      if(ans*ans==n){
            cout<<ans-1<<"\n";
            return;
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

