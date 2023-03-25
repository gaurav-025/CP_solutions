#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<int> v(n+1,0);
      for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v[x]++;
      }
      priority_queue<int> pq;
      for(int i=1;i<=n;i++){
            if(v[i]!=0)
            pq.push(v[i]);
      }
      int ans=0;
      int prev=pq.top();
      pq.pop();
      ans+=prev;
      while(!pq.empty()){
            if(pq.top()>=prev){
                  ans+=prev-1;
                  pq.pop();
                  prev--;
            }
            else if(pq.top()<prev){
                  ans+=pq.top();
                  prev=pq.top();
                  pq.pop();
            }
            if(prev<=1){
                  break;
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

