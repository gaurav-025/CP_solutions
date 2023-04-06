#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      ll n,k;
      cin>>n>>k;
      if(k%2==0 && n%2==1){
            cout<<"NO\n";
            return;
      }
      if(k%2==0 && n%2==0){
                  cout<<"YES\n";
                  return;
      }
      if(k%2==1 && n%2==0){
            cout<<"YES\n";
            return;
      }
      if(n>=k){
            cout<<"YES\n";
            return;
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
