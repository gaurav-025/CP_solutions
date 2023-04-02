#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      int ans=0;
      for(int i=0;i<n;i++)
      ans^=v[i];
      for(int i=0;i<n;i++)
      v[i]^=ans;
      int cnt=0;
      for(int i=0;i<n;i++)
      cnt^=v[i];
      if(cnt==0){
            cout<<ans<<"\n";
            return;
      }
      cout<<"-1\n";
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
