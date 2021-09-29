#include<bits/stdc++.h>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("test.txt" ,"r",stdin);
    // freopen("output.txt" , "w" , stdout);
    // #endif
    int t; cin>>t;
    while(t--){ 
        
        int n;
        cin>>n;
        vector<int> arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans =0;
        for(long long i=1;i<n;i++){
            int mi = min(arr[i],arr[i-1]);
            int ma = max(arr[i],arr[i-1]);
            int d = floor(ma/mi);
            if(d>=2){
                while(ma>mi){
                    mi*=2;
                    ans++;
                }
                ans--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


