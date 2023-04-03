#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,l,r;
      cin>>n>>l>>r;
      vector<int> v1(n+1,0),v2(n+1,0);
      for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i<l)
            v1[x]++;
            else
            v2[x]++;
      }
      for(int i=1;i<=n;i++){
            int x=min(v1[i],v2[i]);
            v1[i]-=x;            
            v2[i]-=x;
            l-=x;
            r-=x;            
      }
      if(l<r){
            swap(v1,v2);
            swap(l,r);
      }
      int ans=0;
      for(int i=1;i<=n;i++){
            int diff=l-r;
            int x=v1[i]/2;
            int y=min(2*x,diff);
            l-=y;
            ans+=y/2;
      }
      ans+=((l+r)/2)+((l-r)/2);
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
