#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      ll n,k;
      cin>>n>>k;
      if(n==1 && k==1){
            cout<<"YES\n";
            return;
      }
      if(k>n){
            cout<<"NO\n";
            return;
      }
      if(k==n){
            cout<<"YES\n";
            return;
      }
      if(n%3!=0){
            cout<<"NO\n";
            return;
      }
      ll x=1;
      ll cnt=0;
      while(n/x){
            if(n%x!=0){
                  break;
            }
            ll y=n/x;
            ll z=1;
            for(int i=0;i<=cnt;i++){
                  if(z*y==k){
                        cout<<"YES\n";
                        return;
                  }
                  z*=2;
            }
            x*=3;
            cnt++;
      }
      cout<<"NO\n";
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
