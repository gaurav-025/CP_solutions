#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<int> a(n),b(n),c(n),d(n);
      for(int i=0;i<n;i++){
            cin>>a[i];
            c[i]=a[i];
      }
      for(int j=0;j<n;j++){
            cin>>b[j];
            d[j]=b[j];
      }
      bool ans=false;
      int x=-1,y=-1;
      for(int i=0;i<n-1;i++){
            if(a[i]>a[n-1]){
                  swap(a[i],b[i]);
            }
      }
      for(int i=0;i<n;i++){
            if(b[i]>b[n-1]){
                  swap(b[i],a[i]);
            }
      }
      for(int i=0;i<n;i++){
            x=max(x,a[i]);
            y=max(y,b[i]);
      }
      if(x==a[n-1] && y==b[n-1]){
            ans=true;
      }

      swap(a[n-1],b[n-1]);

      x=-1,y=-1;
      for(int i=0;i<n-1;i++){
            if(c[i]>c[n-1]){
                  swap(c[i],d[i]);
            }
      }
      for(int i=0;i<n;i++){
            if(d[i]>d[n-1]){
                  swap(d[i],c[i]);
            }
      }
      for(int i=0;i<n;i++){
            x=max(x,c[i]);
            y=max(y,d[i]);
      }
      if(x==c[n-1] && y==d[n-1]){
            ans=true;
      }
      if(ans)
      cout<<"YES\n";
      else
      cout<<"NO\n";
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

