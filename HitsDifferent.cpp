#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 2000007

vector<ll> pre(N);
ll a[1500][1500];

void solve(){
      int n;
      cin>>n;
      cout<<pre[n]<<"\n";
      return;
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      for(int i=0;i<1500;i++){
            for(int j=0;j<1500;j++)
            a[i][j]=0;
      }

      ll cnt=1;

      for(int i=1;i<1500;i++){
            for(int j=i-1;j>=1;j--){
                  a[j][i-j]=a[j-1][i-j]+a[j][i-j-1]-a[j-1][i-j-1]+cnt*cnt;
                  pre[cnt]=a[j][i-j];
                  cnt++;
            }
      }

      int t;
      cin>>t;
      while(t--){
           solve();
      }


      return 0;
}
