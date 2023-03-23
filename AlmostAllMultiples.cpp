#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,x;
      cin>>n>>x;
      vector<int> v(n+1);
      if(n%x!=0){
            cout<<"-1\n";
            return;
      }
      v[1]=x;
      v[n]=1;
      for(int i=2;i<n;i++){
            if(i==x)
            v[i]=n;
            else
            v[i]=i;
      }
      while(x<n){
            for(int i=2*x;i<=n;i+=x){
                  if(n%i==0){
                        v[x]=i;
                        x=i;
                        break;
                  }
            }
      }
      for(int i=1;i<=n;i++)
      cout<<v[i]<<" ";
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
}[B

