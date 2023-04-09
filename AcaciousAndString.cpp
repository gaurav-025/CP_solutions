#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      string s;
      cin>>s;
      string f="abacaba";
      int cnt=0;
      for(int i=0;i<n-6;i++){
            string t=s.substr(i,7);
            if(t==f)
            cnt++;
      }
      if(cnt>1){
            cout<<"NO\n";
            return;
      }
      if(cnt==1){
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                  if(s[i]=='?')
                  cout<<"z";
                  else
                  cout<<s[i];
            }
                  cout<<"\n";
                  return;
      }
      bool ok=false;
      for(int i=0;i<n-6;i++){
            ok=false;
            for(int j=0;j<7;j++){
                  if(f[j]==s[j+i])
                  continue;
                  else if(s[j+i]=='?')
                  continue;
                  else{
                        ok=true;
                        break;
                  }
            }
            if(!ok){
                        string t="";
                        string t1="";
                        if(i-4>=0){
                              t1=s.substr(i-4,4);
                        }
                        if(i+10<n){
                              t=s.substr(i+7,4);
                        }
                        if(t!="caba" && t1!="abac"){
                              string ans;
                              for(int k=0;k<i;k++){
                                    if(s[k]=='?')
                                    ans+='z';
                                    else
                                    ans+=s[k];
                              }
                              ans+=f;
                              for(int k=i+7;k<n;k++){
                                    if(s[k]=='?')
                                    ans+='z';
                                    else
                                    ans+=s[k];     
                              }
                              cnt=0;
                              for(int k=0;k<n-6;k++){
                                    string st=ans.substr(k,7);
                                    if(st==f)
                                    cnt++;
                                    if(cnt>1)
                                    break;
                              }
                              if(cnt==1){
                                    cout<<"YES\n";
                                    cout<<ans<<"\n";
                                    return;
                              }
                        }
            }
      }
      cout<<"NO\n";
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
