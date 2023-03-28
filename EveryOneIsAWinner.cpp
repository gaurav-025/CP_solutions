#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      set<int> ans;
      ans.insert(0);
      for(int i=1;i*i<=n;i++){
            ans.insert(i);
            ans.insert(n/i);
      }
      cout<<ans.size()<<"\n";
      for(auto &i:ans)
      cout<<i<<" ";
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

