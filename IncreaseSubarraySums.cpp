#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,x;
      cin>>n>>x;
      vector<int> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      vector<int> mp(n+1,INT_MIN);
      for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                  sum+=v[j];
                  mp[j-i+1]=max(mp[j-i+1],sum);
            }
      }
      mp[0]=0;
      for(int i=1;i<=n;i++){
            mp[0]=max(mp[0],mp[i]);
      }
      cout<<mp[0]<<" ";
      for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                  if(j>=i)
                  mp[j]+=x;
            }
            cout<<*max_element(mp.begin(),mp.end())<<" ";
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

