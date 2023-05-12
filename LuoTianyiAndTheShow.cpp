#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,m;
      cin>>n>>m;
      unordered_map<int,int> mp;
      int n1=0,n2=0;
      for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==-1)
            n1++;
            else if(x==-2)
            n2++;
            if(x>0)
            mp[x]=1;
      }
      int sum1=mp.size();
      int ans=-1;
      int cnt=0;
      int sum=0;
      for(int i=1;i<=m;i++){
            cnt=0;
            if(mp[i]==1){
                  cnt+=min(i-1,n1+sum)+min(m-i,n2+sum1-sum-1);
                  cnt++;
                  ans=max(ans,cnt);
                  sum++;
            }
      }
      cnt=0;
      ans=max(ans,min(m,sum1+n1));
      ans=max(ans,min(m,n2+sum1));
      cout<<ans<<"\n";

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
