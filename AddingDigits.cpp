#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
      int a,b,n;
      cin>>a>>b>>n;
      string ans;
      if(a%b==0){
            ans+=to_string(a);
            while(n--){
                  ans+='0';
            }
            cout<<ans<<"\n";
            return;
      }
      int rem=(10*a)%b;
      if(rem==0){
            a*=10;
            n--;
            ans+=to_string(a);
            while(n--)
            ans+='0';
            cout<<ans;
            return;
      }
      rem=b-rem;
      if(rem>9){
            cout<<"-1\n";
            return;
      }
      a=(10*a)+rem;
      ans+=to_string(a);
      n--;
      while(n--)
      ans+='0';
      cout<<ans<<"\n";
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

