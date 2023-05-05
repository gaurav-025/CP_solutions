#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> pre(105);

void solve(){
      int n,k;
      cin>>n>>k;
      for(int i=0;i<=n;i++){
            int x=pre[i];
            int y=pre[n-i];
            if(x+y==k){
                  cout<<"YES\n";
                  for(int j=0;j<i;j++)
                  cout<<"1 ";
                  for(int j=0;j<n-i;j++)
                  cout<<"-1 ";
                  cout<<"\n";
                  return;
            }
            else{
                  continue;
            }
      }
      cout<<"NO\n";
      return;
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      pre[0]=0;
      for(int i=1;i<=100;i++){
            pre[i]=i*(i-1)/2;
      }

      int t;
      cin>>t;
      while(t--){
           solve();
      }


      return 0;
}
