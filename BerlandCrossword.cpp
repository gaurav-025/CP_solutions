#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,x,y,z,w;
      cin>>n>>x>>y>>z>>w;
      int t1,t2,t3,t4;
      for(int i=0;i<16;i++){
            t1=x;
            t2=y;
            t3=z;
            t4=w;
            if(i & 1){
                  t1--;
                  t4--;
            }
            if(i & 2){
                  t1--;
                  t2--;
            }
            if(i & 4){
                  t2--;
                  t3--;
            }
            if(i & 8){
                  t3--;
                  t4--;
            }
            if(min(t1,min(t2,min(t3,t4)))>=0 && max(t1,max(t2,max(t3,t4)))<=n-2){
                  cout<<"yes\n";
                  return;
            }
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

