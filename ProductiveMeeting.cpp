#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      set<pair<int,int>> s;
      for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert({-1*x,i+1});
      }
      int ans=0;
      vector<pair<int,int>> v;
      while(true){
            set<pair<int,int>>::iterator it1,it2;
            it1=s.begin();
            it2=++it1;
            --it1;
            if((*it1).first==0 || (*it2).first==0){
                  break;
            }
            else{
                  ans++;
                  pair<int,int> p1,p2;
                  p1=*it1;
                  p2=*it2;
                  v.push_back({p1.second,p2.second});
                  s.erase(it1);
                  s.erase(it2);
                  s.insert({p1.first+1,p1.second});
                  s.insert({p2.first+1,p2.second});
            }
      }
      cout<<ans<<"\n";
      for(auto &i:v)
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
