#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(const pair<int,pair<int,vector<int>>> &a,const pair<int,pair<int,vector<int>>> &b){
      if(a.first!=b.first)
      return a.first>b.first;
      else
      return a.second.first<b.second.first;
}

void solve(){
      int n,m;
      cin>>n>>m;
      unordered_map<int,int> mp;
      for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[i]=x;
      }
      vector<pair<int,pair<int,vector<int>>>> v(n);
      for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            x--;
            y--;
            v[x].first=mp[x];
            v[x].second.first=x;
            v[x].second.second.push_back(y);
            v[y].first=mp[y];
            v[y].second.first=y;
            v[y].second.second.push_back(x);
      }
      sort(v.begin(),v.end(),cmp);
      // for(int i=0;i<n;i++){
      //       cout<<v[i].first<<" "<<v[i].second.first<<" ";
      //       for(auto &j:v[i].second.second)
      //       cout<<j<<" ";
      //       cout<<"\n";
      // }
      // return;
      vector<bool> vis(n,false);
      int ans=0;
      for(int i=0;i<n;i++){
            if(!vis[v[i].second.first]){
                  vis[v[i].second.first]=true;
                  for(auto &j:v[i].second.second){
                        if(!vis[j]){
                              ans+=mp[j];
                              //vis[j]=true;
                        }
                  }
            }
      }
      cout<<ans<<"\n";
      return;
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int t=1;
     // cin>>t;
      while(t--){
           solve();
      }


      return 0;
}

