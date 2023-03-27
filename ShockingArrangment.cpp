#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<ll> v(n),pos,neg,ans;
      int cnt=0;
      for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>0)
            pos.push_back(v[i]);
            else if(v[i]<0)
            neg.push_back(v[i]);
            else{
                  ans.push_back(v[i]);
                  cnt++;
            }
      }
      if(pos.empty() && neg.empty()){
            cout<<"No\n";
            return;
      }
      cout<<"yes\n";
      int l=0,r=0;
      ll sum=0;
      while(cnt<n){
            if(sum<=0){
                  ans.push_back(pos[r]);
                  cnt++;
                  sum+=pos[r];
                  r++;
            }
            else{
                  ans.push_back(neg[l]);
                  cnt++;
                  sum+=neg[l];
                  l++;
            }
      }
      for(auto &i: ans)
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

