#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<ll> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      ll sum=0;
      vector<ll> ans(n); 
      for(int i=0;i<n;i++){
            vector<ll> temp(n);
            temp[i]=v[i];
            ll cnt=v[i];
            ll x=v[i];
            for(int j=i+1;j<n;j++){
                  cnt+=min(x,v[j]);
                  x=min(x,v[j]);
                  temp[j]=x;
            }
            x=v[i];
            for(int j=i-1;j>=0;j--){
                  x=min(x,v[j]);
                  cnt+=x;
                  temp[j]=x;
            }
            if(cnt>=sum){
                  sum=cnt;
                  ans=temp;
            }
      }
      for(auto &i:ans)
      cout<<i<<" ";
      return;
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int t=1;
     // cin>>t;
      while(t--){
           solve();
      }


      return 0;
}
