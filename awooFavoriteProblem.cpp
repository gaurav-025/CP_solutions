#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      string s,t;
      cin>>s>>t;
      string temp1,temp2;
      for(int i=0;i<n;i++){
            if(s[i]!='b')
            temp1+=s[i];
            if(t[i]!='b')
            temp2+=t[i];
      }
      if(temp1!=temp2){
            cout<<"NO\n";
            return;
      }
      vector<int> pos1a,pos1c,pos2a,pos2c;
      for(int i=0;i<n;i++){
            if(s[i]=='a'){
                  pos1a.push_back(i+1);
            }
            else if(s[i]=='c'){
                  pos1c.push_back(i+1);
            }
            if(t[i]=='a'){
                  pos2a.push_back(i+1);
            }
            else if(t[i]=='c'){
                  pos2c.push_back(i+1);
            }
      }
      for(int i=0;i<pos1a.size();i++){
            if(pos1a[i]>pos2a[i]){
                  cout<<"NO\n";
                  return;
            }
      }
      for(int i=0;i<pos2c.size();i++){
             if(pos1c[i]<pos2c[i]){
                  cout<<"NO\n";
                  return;
            }
      }
      cout<<"YES\n";
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

