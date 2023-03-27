#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      unordered_map<int,vector<int>> mp;
      vector<pair<int,int>> v(n-1);
      for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            v[i]={min(x,y),max(x,y)};
            mp[x].push_back(y);
            mp[y].push_back(x);
      }
      if(n==2){
            cout<<2<<"\n";
            return;
      }
      for(auto &i:mp){
            if(i.second.size()>2){
                  cout<<"-1\n";
                  return;
            }
      }
      int ind;
      for(auto &i: mp){
            if(i.second.size()==1){
                  ind=i.first;
                  break;
            }
      }
      map<pair<int,int>,int> ans;
      int cnt=n-2;
      ans[{min(ind,mp[ind][0]),max(ind,mp[ind][0])}]=2;
      ind=mp[ind][0];
      int prev=2;
      while(cnt--){
            int x=ind;
            int y=mp[ind][0];
            int z=mp[ind][1];
            if(ans[{min(x,y),max(x,y)}]!=0){
                  if(prev==2){
                        ans[{min(x,z),max(x,z)}]=3;
                        prev=3;
                        ind=z;
                  }
                  else if(prev==3){
                        ans[{min(x,z),max(x,z)}]=2;
                        prev=2;
                        ind=z;
                  }
            }
            else{
                  if(prev==2){
                        ans[{min(x,y),max(x,y)}]=3;
                        prev=3;
                        ind=y;
                  }
                  else{
                        ans[{min(x,y),max(x,y)}]=2;
                        prev=2;
                        ind=y;
                  }
            }
      }
      for(auto &i:v){
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

