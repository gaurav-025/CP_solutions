#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,m;
      cin>>n>>m;
      vector<int> v[n+1];
      for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
      }
      vector<int> f;
      for(int i=1;i<=n;i++){
            if(v[i].size()>1){
                  f.push_back(v[i].size());
            }
      }
      sort(f.begin(),f.end());
      if(f[0]==f[f.size()-1]){
            cout<<f[0]<<" "<<f[0]-1<<"\n";
            return;
      }
      if(f[0]==f[1]){
            cout<<f[f.size()-1]<<" "<<f[0]-1<<"\n";
            return;
      }
      cout<<f[0]<<" "<<f[1]-1<<"\n";
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
