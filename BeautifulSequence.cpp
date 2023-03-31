#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<pair<int,int>> v(n);
      for(int i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second=i+1;
      }
      for(int i=0;i<n;i++){
            if(v[i].second>=v[i].first){
                  cout<<"yes\n";
                  return;
            }
      }
      cout<<"no\n";
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
