#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<ll> v(n);
      int o=0,e=0;
      for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i] & 1)
            o++;
            else
            e++;
      }
      sort(v.begin(),v.end());
      ll m=v[0];
      if(m%2==0){
            if(o!=0){
                  cout<<"NO\n";
                  return;
            }
            cout<<"YES\n";
            return;
      }
      cout<<"YES\n";
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
