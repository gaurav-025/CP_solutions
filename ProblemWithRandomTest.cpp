#include<bits/stdc++.h>
using namespace std;
#define ll long long

string f(string a,string b){
      reverse(a.begin(),a.end());
      reverse(b.begin(),b.end());
      string ans;
      int i;
      for(i=0;i<min(a.length(),b.length());i++){
            if(a[i]=='1' || b[i]=='1')
            ans+='1';
            else
            ans+='0';
      }
      if(i==a.length()){
            ans+=b.substr(i);
      }
      else{
            ans+=a.substr(i);
      }
      reverse(ans.begin(),ans.end());
      return ans;
      
}


void solve(){
      int n;
      cin>>n;
      string s;
      cin>>s;
      int ind=-1;
      for(int i=0;i<n;i++){
            if(s[i]=='0'){
                  ind=i;
                  break;
            }
      }
      if(ind==-1){
            cout<<s<<"\n";
            return;
      }
      int a=s.find('1');
      if(a==-1){
            cout<<"0\n";
            return;
      }
      int b=s.find('0',a);
      if(b==-1){
            cout<<s<<"\n";
            return;
      }
      int l=n-b;
      string ans=s;
      for(int i=a;i<b;i++){
            string t;
            t=f(s,s.substr(i,l));
            if(t>ans)
            ans=t;
      }
      string final;
      ind=0;
      while(true){
            if(s[ind]=='0')
            ind++;
            else{
                  while(ind<ans.length()){
                        final+=ans[ind];
                        ind++;
                  }
                  break;
            }
            
      }
      cout<<final<<"\n";
      return;
}

int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int t=1;
      //cin>>t;
      while(t--){
           solve();
      }


      return 0;
}