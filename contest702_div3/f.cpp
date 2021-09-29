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
        unordered_map<ll , ll> um;
        for(ll i=0;i<n;i++){
            ll temp ; cin>>temp;
            um[temp]++;
        }
        vector<ll> frequency;
        for(auto k : um){
            frequency.push_back(k.second);
        }
        sort(frequency.begin() , frequency.end());
        ll res=0;
        for(auto i=1;i<frequency.size();i++){
            res+=(frequency[i]-frequency[0]);
        }
        ll presum =0; ll right = res;
        for(auto i=1;i<frequency.size();i++){
            right-=(frequency[i]-frequency[i-1])*(frequency.size()-i);
            presum +=frequency[i-1];
            res = min(res , right+presum);
        }
        cout<<res<<endl;
    }
    return 0;
}