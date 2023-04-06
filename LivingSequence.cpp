#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      ll k;
      cin>>k;
      vector<int> ans;
      while(k>0){
            ans.push_back(k%9);
            k/=9;
      }
      reverse(ans.begin(),ans.end());
      for(int i=0;i<ans.size();i++){
            if(ans[i]<4)
            continue;
            else{
                  ans[i]=ans[i]+1;
            }
      }
      for(auto &i:ans)
      cout<<i;
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
