#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      if(n==1){
            cout<<"1\n";
            return;
      }
      if(n & 1){
            cout<<"-1\n";
            return;
      }
      int a=n,b=1,cnt=0;
      while(true){
            cout<<a<<" ";
            cnt++;
            if(cnt==n)
            break;
            cout<<b<<" ";
            cnt++;
            if(cnt==n)
            break;
            a-=2;
            b+=2;
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
