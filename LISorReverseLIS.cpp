#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      unordered_map<int,int> mp;
      for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
      }
      int a=0,b=0;
      for(auto &i:mp){
            if(i.second>=2)
            a++;
            else
            b++;
      }
      int ans=a+(b+1)/2;
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

