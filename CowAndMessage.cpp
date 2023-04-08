#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      string s;
      cin>>s;
      vector<ll> v1(26,0);
      vector<vector<ll>> v2(26,vector<ll>(26,0));
      for(int i=0;i<s.length();i++){
            for(int j=0;j<26;j++){
                  v2[j][s[i]-'a']+=v1[j];
            }
            v1[s[i]-'a']++;
      }
      ll ans;
      ans=*max_element(v1.begin(),v1.end());
      for(int i=0;i<26;i++){
            for(int j=0;j<26;j++)
            ans=max(ans,v2[i][j]);
      }
      cout<<ans<<"\n";
      return;
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int t=1;
     // cin>>t;
      while(t--){
           solve();
      }


      return 0;
}
