#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int n;
      cin>>n;
      string s;
      cin>>s;
      char ch1=s[0],ch2=s[0];
      int a=-1,b=-1;
      for(int i=1;i<n;i++){
                  if(min(ch1,s[i])!=ch1){
                        ch1=s[i];
                        a=i;
                  }
            
      }
      for(int i=n-1;i>0;i--){
            if(s[i]==ch2){
                  b=i;
                  break;
            }
      }
      if(a==-1){
            if(b==-1){
                  cout<<s<<"\n";
                  return;
            }
            string ans;
            ans+=ch2;
            for(int i=0;i<n;i++){
                  if(i!=b)
                  ans+=s[i];
            }
            cout<<ans<<"\n";
            return;
      }
      int c=-1;
      string ans;
      for(int i=n-1;i>a;i--){
            if(s[i]==ch1){
                  c=i;
                 ans+=ch1;
                 for(int j=0;j<n;j++){
                  if(j!=c)
                  ans+=s[j];
                 } 
                 cout<<ans<<"\n";
                 return;
            }
      }
      ans+=ch1;
      for(int i=0;i<n;i++){
            if(i!=a){
                  ans+=s[i];
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
