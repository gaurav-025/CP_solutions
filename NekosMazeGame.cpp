#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,q;
      cin>>n>>q;
      vector<vector<int>> v(2,vector<int>(n,0));
      set<pair<pair<int,int>,pair<int,int>>> s;
      while(q--){
            bool flag=true;
            int a,b;
            cin>>a>>b;
            a--;
            b--;
            v[a][b]==0 ? v[a][b]=1 : v[a][b]=0;
            if(v[a][b]==1){
            if(a==1){
                  if(b-1>=0 && v[0][b-1]){
                       // cout<<"No\n";
                        s.insert({{0,b-1},{1,b}});
                        flag=false;
                  }
                  if(v[0][b]){
                       // cout<<"no\n";
                        flag=false;
                        s.insert({{0,b},{1,b}});
                  }
                  if(b+1<n && v[0][b+1]){
                       // cout<<"no\n";
                        flag=false;
                        s.insert({{0,b+1},{1,b}});
                  }
                  if(!flag || !s.empty()){
                        cout<<"no\n";
                  }
                  else{
                        cout<<"yes\n";
                  }
                  
            }
            else {
                  if(b-1>=0 && v[1][b-1]){
                       // cout<<"No\n";
                        s.insert({{0,b},{1,b-1}});
                        flag=false;
                  }
                  if(v[1][b]){
                       // cout<<"no\n";
                        flag=false;
                        s.insert({{0,b},{1,b}});
                  }
                  if(b+1<n && v[1][b+1]){
                       // cout<<"no\n";
                        s.insert({{0,b},{1,b+1}});
                        flag=false;
                  }
                  if(!flag || !s.empty())
                  cout<<"no\n";
                  else
                  cout<<"yes\n";
            }
          }
          else{
            if(a==1){
                  if(b-1>=0 && v[0][b-1]) s.erase({{0,b-1},{1,b}});
                  if(v[0][b]) s.erase({{0,b},{1,b}});
                  if(b+1<n && v[0][b+1]) s.erase({{0,b+1},{1,b}});
            }
            else{
                  if(b-1>=0 && v[1][b-1]) s.erase({{0,b},{1,b-1}});
                  if(v[1][b]) s.erase({{0,b},{1,b}});
                  if(b+1<n && v[1][b+1]) s.erase({{0,b},{1,b+1}});
            }
            if(s.empty()){
                  cout<<"Yes\n";
            }
            else
            cout<<"no\n";
          }
      }
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int t=1;
      //cin>>t;
      while(t--){
           solve();
      }


      return 0;
}

