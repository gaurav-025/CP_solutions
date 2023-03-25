#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      priority_queue<ll> pq1,pq2;
      ll sum=0;
      for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            pq1.push(x);
            sum+=x;
      }
      ll x,y;
      pq2.push(sum);
      while(!pq1.empty() && !pq2.empty()){
            x=pq1.top();
            y=pq2.top();
            if(x>y){
                  cout<<"no\n";
                  return;
            }
            else if(x==y){
                  pq1.pop();
                  pq2.pop();
            }
            else{
                  pq2.pop();
                  pq2.push(y/2);
                  pq2.push((y-(y/2)));
            }
      }
      if(pq2.empty() && pq1.empty()){
            cout<<"yes\n";
            return;
      }
      cout<<"no\n";
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

