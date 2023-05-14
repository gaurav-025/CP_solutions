#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++){
            cin>>v[i];
      }
      vector<int> diff(n);
      int ans;
      for(int i=0;i<n;i++){
            diff[i]=abs(v[i]-i-1);
            if(diff[i]!=0)
            ans=diff[i];
      }
      for(int i=0;i<n;i++){
            if(diff[i]!=0)
            ans=__gcd(ans,diff[i]);
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
