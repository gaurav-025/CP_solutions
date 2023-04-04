#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<int> v(n);
      vector<int> pos[n+1];
      for(int i=0;i<n;i++){
            cin>>v[i];
            pos[v[i]].push_back(i);
      }
      vector<int> ans(n+1,INT_MAX);
      for(int i=1;i<=n;i++){
            if(pos[i].size()==0)
            continue;
            int k=-1;
            for(int j=0;j<pos[i].size()-1;j++){
                  k=max(k,pos[i][j+1]-pos[i][j]);
            }
            k=max(k,max(pos[i][0]+1,n-pos[i][pos[i].size()-1]));
            ans[k]=min(ans[k],i);
      }
      if(ans[1]==INT_MAX)
      cout<<"-1 ";
      else{
            cout<<ans[1]<<" ";
      }
      for(int i=2;i<=n;i++){
            ans[i]=min(ans[i],ans[i-1]);
            if(ans[i]==INT_MAX)
            cout<<"-1 ";
            else
            cout<<ans[i]<<" ";
      }
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
