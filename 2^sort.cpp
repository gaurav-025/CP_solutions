#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,k;
      cin>>n>>k;
      vector<ll> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      vector<ll> ans;
      ans.push_back(-1);
      for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                  if(2*v[i+1]>v[i])
                  continue;
                  else{
                        ans.push_back(i);
                  }
            }
            else
            continue;
      }
      ll cnt=0;
      if(ans.size()==1){
            cnt+=(n-k);
            cout<<cnt<<"\n";
            return;
      }
      for(int i=1;i<ans.size();i++){
            if(ans[i]-ans[i-1]-k>=0)
            cnt+=(ans[i]-ans[i-1]-k);
            else
            continue;
      }
      if(n-1-ans[ans.size()-1]-k>=0)
      cnt+=(n-1-ans[ans.size()-1]-k);
      cout<<cnt<<"\n";
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

