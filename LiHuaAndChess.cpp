#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,m;
      cin>>n>>m;
      printf("? 1 1\n");
      fflush(stdout);
      int x;
      scanf("%d",&x);
      if(x==0){
            printf("! 1 1\n");
            fflush(stdout);
            return;
      }
      int r=min(n,x+1),c=min(m,x+1);
      printf("? %d %d\n",r,c);
      fflush(stdout);
      scanf("%d",&x);
      if(x==0){
            printf("! %d %d\n",r,c);
            fflush(stdout);
            return;
      }
      int r1=max(r-x,1),c1=c;
      c=max(c-x,1);
      printf("? %d %d\n",r,c);
      fflush(stdout);
      scanf("%d",&x);
      if(x==0){
            printf("! %d %d\n",r,c);
            fflush(stdout);
            return;
      }
      printf("! %d %d\n",r1,c1);
      fflush(stdout);
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
