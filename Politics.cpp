#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,k;
      cin>>n>>k;
      vector<string> v(n);
      for(int i=0;i<n;i++){
            cin>>v[i];
      }
      int ans=0;
      for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                  if(v[j]!="" && v[j][i]!=v[0][i]){
                        v[j]="";
                        ans++;
                  }
                  else
                  continue;
            }
      }
      cout<<n-ans<<"\n";
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
