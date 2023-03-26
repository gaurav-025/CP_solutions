#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int m;
      cin>>m;
      unordered_map<int,int> mp;
      for(int j=1;j<=m;j++){
            int n;
            cin>>n;
            for(int i=0;i<n;i++){
                  int x;
                  cin>>x;
                  mp[x]=j;
            }
      }
      vector<int> ans(m+1,-1);
      for(auto &i:mp){
            ans[i.second]=i.first;
      }
      for(int i=1;i<=m;i++){
            if(ans[i]==-1){
                  cout<<"-1\n";
                  return;
            }
      }
      for(int i=1;i<=m;i++){
            cout<<ans[i]<<" ";
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

