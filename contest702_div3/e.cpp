//JAY SHREE RAM

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll ;

int main(){
    int t; cin>>t;
    while(t--){
        // #ifndef ONLINE_JUDGE
        // freopen("test.txt" ,"r",stdin);
        // freopen("output.txt" , "w" , stdout);
        // #endif
        ll n ; cin >>n;
        vector<pair<ll,ll>> a(n);
        for(auto i=0;i<n;i++){
            ll temp ; cin>>temp;
            a[i]= {temp ,i};
        }
        sort(a.begin(),a.end());
        ll tokens = 0;
        ll index = 0;
        for(ll i=0;i<n;i++){
            if(tokens<a[i].first){
                index = i;
            } 
            tokens+=a[i].first;
        }
        vector<ll> ans;
        for(ll i =index ;i<n;i++){
            ans.push_back(a[i].second);
        }
        sort(ans.begin(), ans.end());
        cout<<ans.size()<<endl;
        for(ll i=0;i<ans.size();i++){
            cout<<ans[i]+1<<" ";
        }cout<<endl;
    }
    return 0;
}