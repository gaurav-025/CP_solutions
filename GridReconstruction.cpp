#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<vector<int>> ans(2,vector<int>(n));
      int x=2;
      for(int i=1;i<n;i+=2){
            ans[0][i]=x;
            x+=2;
      }
      for(int i=2;i<n;i+=2){
            ans[0][i]=x;
            x+=2;
      }
      ans[0][0]=x;
      x=1;
      for(int i=0;i<n-1;i+=2){
            ans[1][i]=x;
            x+=2;
      }
      for(int i=1;i<n;i+=2){
            ans[1][i]=x;
            x+=2;
      }
      for(int i=0;i<2;i++){
            for(int j=0;j<n;j++)
            cout<<ans[i][j]<<" ";
            cout<<"\n";
      }
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
