#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      unordered_map<int,int> mp;
      for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]=i;
      }
      for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]=i;
      }
      vector<pair<int,int>> v(n);
      v[0]={2*n-1,mp[2*n]};
      int cnt=0;
      for(int i=2*n-3;i>0;i-=2){
            int ind=mp[i+1];
            ind=min(ind,v[cnt].second);
            cnt++;
            v[cnt]={i,ind};
      }
      int ans=INT_MAX;
      for(auto &i:v){
            int x=mp[i.first]+i.second;
            ans=min(ans,x);
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

