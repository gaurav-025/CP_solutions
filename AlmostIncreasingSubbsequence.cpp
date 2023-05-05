#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,q;
      cin>>n>>q;
      vector<int> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      vector<int> p(n+1,0);
      vector<vector<int>> f;
      for(int i=0;i<n;i++){
            if(i==n-1){
                  f.push_back({v[i]});
            }
            else if(v[i]<v[i+1]){
                  f.push_back({v[i]});
            }
            else{
                  vector<int> temp;
                  while(i<n-1 && v[i]>=v[i+1]){
                        temp.push_back(v[i]);
                        i++;
                  }
                  temp.push_back(v[i]);
                  f.push_back(temp);
            }
      }
      for(auto &i:f){
            if(i.size()<3){
                  continue;
            }
            else{
                  for(int j=1;j<i.size()-1;j++){
                        i[j]=0;
                  }
            }
      }
      // for(auto &i:f){
      //       for(auto &j:i)
      //       cout<<j<<" ";
      // }
      // cout<<"\n";
      int cnt=0;
      for(auto &i:f){
            for(auto &j:i){
                  cnt++;
                  if(j==0){
                        p[cnt]=p[cnt-1]+1;
                  }
                  else{
                        p[cnt]=p[cnt-1];
                  }
            }
      }
      // for(auto &i:p)
      // cout<<i<<" ";
      // cout<<"\n";
      while(q--){
            int l,r;
            cin>>l>>r;
            int ans=r-l+1;
            if(ans<3){
                  cout<<ans<<"\n";
                  continue;
            }
            ans-=(p[r-1]-p[l]);

            cout<<ans<<"\n";
      }
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
