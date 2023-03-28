#include<bits/stdc++.h>
using namespace std;
#define ll long long

int check(int n){
      int cnt=0;
      while(n){
            n/=10;
            cnt++;
      }

      return cnt;
}

void solve(){
      int n;
      cin>>n;
      vector<int> a(n),b(n);
      multiset<int> s1,s2;
      for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]!=1)
            s1.insert(a[i]);
      }
      for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]!=1)
            s2.insert(b[i]);
      }
      int ans=0;
      for(int i=0;i<n;i++){
            if(a[i]!=1){
                  auto it1=s1.find(a[i]);
                  auto it2=s2.find(a[i]);
                  if(it1!=s1.end() && it2!=s2.end()){
                        s1.erase(it1);
                        s2.erase(it2);
                  }
            }
            if(b[i]!=1){
                  auto it1=s1.find(b[i]);
                  auto it2=s2.find(b[i]);
                  if(it1!=s1.end() && it2!=s2.end()){
                        s1.erase(it1);
                        s2.erase(it2);
                  }
            }
      }
      a.clear();
      b.clear();
      multiset<int> s3,s4;
      for(auto &i:s1){
            if(check(i)>1){
                  ans++;
                  s3.insert(check(i));
                  a.push_back(check(i));
            }
            else{
                  s3.insert(i);
                  a.push_back(i);
            }
      }
      for(auto &i:s2){
            if(check(i)>1){
                  ans++;
                  s4.insert(check(i));
                  b.push_back(check(i));
            }
            else{
                  s4.insert(i);
                  b.push_back(i);
            }
      }
      for(int i=0;i<a.size();i++){
            auto it1=s3.find(a[i]);
            auto it2=s4.find(a[i]);
            if(it1!=s3.end() && it2!=s4.end()){
                  s3.erase(it1);
                  s4.erase(it2);
            }
      }
      for(int i=0;i<b.size();i++){
            auto it1=s3.find(b[i]);
            auto it2=s4.find(b[i]);
            if(it1!=s3.end() && it2!=s4.end()){
                  s3.erase(it1);
                  s4.erase(it2);
            }
      }
      ans+=s3.size()+s4.size();
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

