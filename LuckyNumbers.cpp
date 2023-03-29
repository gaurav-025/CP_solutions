#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int n){
      int m=10,M=-1;
      while(n){
            m=min(m,n%10);
            M=max(M,n%10);
            n/=10;
      }
      if(m==0 && M==9){
            return true;
      }
      return false;
}

pair<int,int> f1(int n){
      int m=10,M=-1;
      while(n){
            m=min(m,n%10);
            M=max(M,n%10);
            n/=10;
      }
      return {m,M};
}

void solve(){
      int l,r;
      cin>>l>>r;
      if(r-l+1>=90){
            for(int i=l;i<=r;i++){
                  if(check(i)){
                        cout<<i<<"\n";
                        return;
                  }
            }
      }
      int ans;
      int diff=-1;
      for(int i=l;i<=r;i++){
            pair<int,int> p=f1(i);
            if(max(diff,p.second-p.first)!=diff){
                  ans=i;
                  diff=max(diff,p.second-p.first);
            }
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

