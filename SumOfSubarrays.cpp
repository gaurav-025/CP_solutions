#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,k;
      cin>>n>>k;
      vector<int> ans(n);
      if(k<=n){
            for(int i=0;i<n;i++){
                  if(i<k-1)
                  ans[i]=-1;
                  else if(i==k-1)
                  ans[i]=100;
                  else if(i==k)
                  ans[i]=-200;
                  else
                  ans[i]=-1;
            }
            for(auto &i:ans)
            cout<<i<<" ";
            cout<<"\n";
            return;
      }
      int cnt=n-1;
      while(k>(cnt+1)){
            ans[cnt]=1000;
            k-=(cnt+1);
            cnt--;
      }
      for(int i=0;i<=cnt;i++){
            if(i<k-1)
            ans[i]=-1;
            else if(i==k-1)
            ans[i]=100;
            else if(i==k)
            ans[i]=-200;
            else
            ans[i]=-1;
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
