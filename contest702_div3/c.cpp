#include <iostream>
#include<math.h>
#define ll unsigned long long
using namespace std;

bool solve(ll x){
    ll c = cbrt(x);
    ll t = c*c;
    t*=c;
    return t==x;
}

int main()
{
 ios_base::sync_with_stdio(false);
 bool flag=false;
 #ifndef ONLINE_JUDGE
 freopen("test.txt" ,"r",stdin);
 freopen("output.txt" , "w" , stdout);
 #endif
 ll t,N;
 cin>>t;
 while(t--)
 {
     cin>>N;
     flag=false;
     for(ll i=1;i<=10000 ; i++)
     {
       ll x = i*i;
       x*=i;
       x = N-x;
       if(x>0 and solve(x)){
           flag = true;
           break;
       }
     }
     if(flag) cout<<"YES\n"; else cout<<"NO\n";
 }
 return 0;
}
