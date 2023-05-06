#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<int> v(n);
      int ans=0;
      for(int i=0;i<n;i++){
            cin>>v[i];
      }
      int cnt=0;
      for(int i=0;i<n;i++){
            if(v[i]==0){
                  while(i<n && v[i]==0){
                        cnt++;
                        i++;
                  }
                  ans=max(ans,cnt);
            }
            cnt=0;
      }
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
