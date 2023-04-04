#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<int> v(n-1);
      for(int i=0;i<n-1;i++)
      cin>>v[i];
      if(n==2){
            cout<<v[0]<<" "<<v[0]<<"\n";
            return;
      }
      vector<int> ans(n);
      if(v[0]>v[1]){
            ans[0]=v[0];
            ans[1]=v[1];
            ans[2]=v[1];
      }
      else{
            ans[0]=v[0];
            ans[1]=v[0];
            ans[2]=v[1];
      }
      for(int i=2;i<n-1;i++){
            if(v[i]>=v[i-1]){
                  ans[i+1]=v[i];
            }
            else{
                  if(ans[i]==ans[i-1]){
                        ans[i]=v[i];
                        ans[i+1]=v[i];
                  }
                  else{
                        ans[i+1]=v[i];
                        ans[i+2]=v[i];
                  }
            }
      }
      for(auto &i:ans)
      cout<<i<<" ";
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
