#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
      int n,m;
      cin>>n>>m;
      vector<vector<int>> v(n,vector<int>(m));
      for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            cin>>v[i][j];
      }
     // int ans=0;
      vector<vector<bool>> vis(n,vector<bool>(m,false));
      queue<pair<int,int>> q;
      int ans=0;
      for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                  if(vis[i][j] || v[i][j]==0)
                  continue;
                  int cnt=0;
                  vis[i][j]=true;
                  q.push({i,j});
                  while(!q.empty()){
                        pair<int,int> p=q.front();
                        cnt+=v[p.first][p.second];
                        q.pop();
                        if(p.second-1>=0 && v[p.first][p.second-1]!=0 && !vis[p.first][p.second-1]){
                              q.push({p.first,p.second-1});
                              vis[p.first][p.second-1]=true;
                        }
                        if(p.second+1<m && v[p.first][p.second+1]!=0 && !vis[p.first][p.second+1]){
                              q.push({p.first,p.second+1});
                              vis[p.first][p.second+1]=true;
                        }
                        if(p.first-1>=0 && v[p.first-1][p.second]!=0 && !vis[p.first-1][p.second]){
                              q.push({p.first-1,p.second});
                              vis[p.first-1][p.second]=true;
                        }
                        if(p.first+1<n && v[p.first+1][p.second]!=0 && !vis[p.first+1][p.second]){
                              q.push({p.first+1,p.second});
                              vis[p.first+1][p.second]=true;
                        }
                  }
                  ans=max(ans,cnt);
            }
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
