#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      vector<int> a(n);
      for(int i=0;i<n;i++)
      cin>>a[i];
      vector<int> a1(n);
      for(int i=0;i<n;i++)
      cin>>a1[i];
      int l,r;
      int sum=-1;
      int check=0;
      for(int i=0;i<n;){
            if(i+1<n && a1[i]<=a1[i+1]){
                  int cnt=1;
                  check=1;
                  while(i+1<n && a1[i]<=a1[i+1]){
                        if(a1[i]==a[i] && a1[i+1]==a[i+1])
                        check++;
                        cnt++;
                        i++;
                  }
                  
                  if(cnt>sum && check!=cnt){
                        sum=cnt;
                        r=i+1;
                        l=r-cnt+1;
                  }
            }
            else
            i++;
      }
      cout<<l<<" "<<r<<"\n";
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
