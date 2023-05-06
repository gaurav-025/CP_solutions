#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n,k;
      cin>>n>>k;
      string ans;
      vector<int> v1(k),v2(k);
      for(int i=0;i<k;i++){
            cin>>v1[i];
      }
      for(int i=0;i<k;i++){
            cin>>v2[i];
      }
      if(v2[0]-3>v1[0]-3){
            cout<<"NO\n";
            return;
      }
      for(int i=1;i<k;i++){
            if(v2[i]-v2[i-1]>v1[i]-v1[i-1]){
                  cout<<"NO\n";
                  return;
            }
      }
      string temp="abc";
      int a=0;
      cout<<"YES\n";
      for(int i=0;i<v2[0]-3;i++)
      ans+="a";
      for(int i=0;i<v1[0]-v2[0]+3;i++){
            ans+=temp[a];
            a++;
            a%=3;
      }
      char ch='d';
      for(int i=1;i<k;i++){
            int d=v2[i]-v2[i-1];
            while(d--){
                  ans+=ch;
            }
            d=v1[i]-v1[i-1]-v2[i]+v2[i-1];
            if(d!=v1[i]-v1[i-1]){
                  ch=char(ch+1);
            }
            while(d--){
                  ans+=temp[a];
                  a++;
                  a%=3;
            }
      }
      cout<<ans<<"\n";
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
