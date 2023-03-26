#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      //sort(v.begin(),v.end());
      int flag=0;
      for(int i=0;i<n;i++){
            if(v[i]%10==0){
                  flag=1;
            }
            if(v[i]%10==5){
                  v[i]+=5;
                  flag=1;
            }
      }
      sort(v.rbegin(),v.rend());
      if(flag==1 && v[0]==v[n-1]){
            cout<<"yes\n";
            return;
      }
      if(flag==1 && v[0]!=v[n-1]){
            cout<<"no\n";
            return;
      }
      for(int i=0;i<n;i++){
            while(v[i]%10!=2){
                  v[i]+=(v[i]%10);
            }
      }
      ll x=v[0];
      for(int i=n-1;i>0;i--){
            if(abs(x-v[i])%20!=0){
                  cout<<"no\n";
                  return;
            }
      }
      cout<<"yes\n";
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

