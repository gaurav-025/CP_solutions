#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      sort(v.begin(),v.end());
      int ans=0;
      int l=0,r=n-1;
      while(l<r){
            ans+=v[r]-v[l];
            l++;
            r--;
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
