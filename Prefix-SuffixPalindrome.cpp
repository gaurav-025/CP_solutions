#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      string s;
      cin>>s;
      int l=s.length();
      vector<int> pos[26];
      for(int i=0;i<l;i++){
            pos[s[i]-'a'].push_back(i);
      }
      string a,b,c,d;
      int ind=-1;
      for(int i=0;i<l;i++){
            if(s[i]==s[l-1-i]){
                  a+=s[i];
                  b+=s[l-1-i];
            }
            else{
                  ind=i;
                  break;
            }
      }
      if(ind==-1){
            cout<<s<<"\n";
            return;
      }
      for(auto &i:pos[s[ind]-'a']){
            if(i>l-1-ind){
                  break;
            }
            if(i<ind)
            continue;
            string prev=c;
            c=s.substr(ind,i-ind+1);
            string temp=c;
            reverse(temp.begin(),temp.end());
            if(temp!=c)
            c=prev;

      }
      for(auto &i:pos[s[l-1-ind]-'a']){
            if(i<ind)
            continue;
            if(i>l-1-ind)
            break;
            string prev=d;
            d=s.substr(i,l-1-ind-i+1);
            string temp=d;
            reverse(temp.begin(),temp.end());
            if(temp!=d){
                  d=prev;
            }
            else
            break;
      }
      string ans;
      ans+=a;
      ans+=(c.length()>=d.length() ? c:d);
      reverse(b.begin(),b.end());
      ans+=b;

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
