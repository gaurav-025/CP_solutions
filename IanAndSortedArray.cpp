#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<ll> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      if(n%2==1){
            cout<<"YES\n";
            return;
      }
      for(int i=0;i<n-2;i++){
            if(v[i+1]!=v[i]){
                  ll d=v[i]-v[i+1];
                  v[i+1]+=d;
                  v[i+2]+=d;
            }
      }
      if(v[n-1]>=v[n-2]){
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
