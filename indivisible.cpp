#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      if(n==1){
            cout<<"1\n";
            return;
      }
      if(n==2){
            cout<<"2 1\n";
            return;
      }
      if(n & 1){
            cout<<"-1\n";
            return;
      }
      int e=2,o=1;
      for(int i=0;i<n;i++){
            if(i & 1){
                  cout<<o<<" ";
                  o+=2;
            }
            else{
                  cout<<e<<" ";
                  e+=2;
            }
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
