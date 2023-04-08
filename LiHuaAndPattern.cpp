#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      ll k;
      cin>>n>>k;
      vector<vector<int>> mat(n,vector<int>(n));
      for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                  cin>>mat[i][j];
            }
      }
      vector<vector<int>> f(n,vector<int>(n));
      for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                  f[i][j]=mat[n-1-i][n-1-j];
            }
      }
      ll cnt=0;
      for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                  if(f[i][j]==mat[i][j])
                  cnt++;
            }
      }
      // 
      
      ll ans=0;
      ll e=0,x=0;
      for(int i=0;i<=n/2-1;i++){
            for(int j=0;j<n;j++){
            if(mat[i][j]!=f[i][j])
            ans++;
            else 
            e++;
            }
      }
      if(n%2==1){
            for(int i=0;i<n/2;i++){
                  if(mat[n/2][i]!=f[n/2][i])
                  ans++;
                  else
                  e++;
            }
            x++;
      }
      if(ans==k){
            cout<<"YES\n";
            return;
      }
      if(ans<k){
      //      if(2*e+ans+x<k){
      //       cout<<"NO\n";
      //       return;
      //      }
           ll d=k-ans;
           if(d%2==1){
            if(x==0){
                  cout<<"NO\n";
                  return;
            }
            cout<<"YES\n";
            return;
           }
           cout<<"YES\n";
           return;
      }
      cout<<"NO\n";
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
