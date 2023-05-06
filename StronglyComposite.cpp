#include<bits/stdc++.h>
using namespace std;
#define ll long long
//const int N = 10000007;

//vector<int> p[N+1];
void factor(int n,unordered_map<int,int>& mp){
      int x=n;
      while(x%2==0){
            mp[2]++;
            x/=2;
      }
      for(int i=3;i*i<=x;i+=2){
            while(x%i==0){
                  mp[i]++;
                  x/=i;
            }
      }
      if(x!=1){
            mp[x]++;
      }
}

void solve(){
      int n;
      cin>>n;
      vector<int> v(n);
      unordered_map<int,int> mp;
      for(int i=0;i<n;i++){
            cin>>v[i];
            factor(v[i],mp);
      }
      // for(int i=0;i<n;i++){
      //       for(auto &j:p[v[i]]){
      //             mp[j]++;
      //       }
      // }
      int ans=0,cnt=0;
      for(auto &i:mp){
            ans+=i.second/2;
            cnt+=i.second%2;
      }
      ans+=cnt/3;
      cout<<ans<<"\n";
      return;
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      // for(int i=2;i<=N;i++){
      //       factor(i);
      // }

      int t;
      cin>>t;
      while(t--){
           solve();
      }


      return 0;
}
