#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      ll k;
      cin>>n>>k;
      unordered_map<ll,ll> mp;
      vector<pair<ll,ll>> a(n);
      vector<ll> b(n);
      vector<pair<ll,ll>> t(n);
      for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i;
      }
      for(int j=0;j<n;j++)
      cin>>b[j];
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
      for(int i=0;i<n;i++){
            mp[a[i].second]=b[i];
      }
      for(int i=0;i<n;i++){
            cout<<mp[i]<<" ";
      }
      cout<<"\n";
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
