#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(vector<int>& p){
      int l=p.size();
      for(int i=0;i<l;i++){
            if(p[i]!=i+1)
            return false;
      }
      return true;
}



void solve(){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++){
            cin>>v[i];
      }
      vector<int> p1,p2;
     // int x=-1;
      unordered_map<int,int> mp;
      for(int i=0;i<n;i++){
            if(mp[v[i]]==0){
                  p1.push_back(v[i]);
                  mp[v[i]]++;
            }
            else{
       //           x=v[i];
                  for(int j=i;j<n;j++)
                  p2.push_back(v[j]);
                  break;
            }
      }
      sort(p1.begin(),p1.end());
      sort(p2.begin(),p2.end());
      vector<pair<int,int>> ans;
      if(check(p1) && check(p2)){
            ans.push_back({p1.size(),p2.size()});
      }
     // p1.clear();
      //p2.clear();
      reverse(v.begin(),v.end());
      vector<int> p3,p4;

      unordered_map<int,int> mp2;
      for(int i=0;i<n;i++){
            if(mp2[v[i]]==0){
                  p3.push_back(v[i]);
                  mp2[v[i]]++;
            }
            else{
       //           x=v[i];
                  for(int j=i;j<n;j++)
                  p4.push_back(v[j]);
                  break;
            }
      }
      sort(p3.begin(),p3.end());
      sort(p4.begin(),p4.end());
     // vector<pair<int,int>> ans;
      if(check(p4) && check(p3)){
            ans.push_back({p4.size(),p3.size()});
      }
      if(ans.size()>1){
            if(ans[0]==ans[1]){
                  cout<<"1\n";
                  cout<<ans[0].first<<" "<<ans[0].second<<"\n";
                  return;
            }
      }
      cout<<ans.size()<<"\n";
      for(auto &i:ans)
      cout<<i.first<<" "<<i.second<<"\n";

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
