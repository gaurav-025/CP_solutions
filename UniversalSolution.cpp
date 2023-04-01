#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      string s;
      cin>>s;
      int freq[3]={};
      for(int i=0;i<s.length();i++){
            if(s[i]=='R')
            freq[0]++;
            else if(s[i]=='S')
            freq[1]++;
            else
            freq[2]++;
      }
      int x=max(freq[0],max(freq[1],freq[2]));
      if(x==freq[0]){
            for(int i=0;i<s.length();i++)
            cout<<"P";
      }
      else if(x==freq[1]){
            for(int i=0;i<s.length();i++)
            cout<<"R";
      }
      else{
            for(int i=0;i<s.length();i++)
            cout<<"S";
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
