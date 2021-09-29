#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        
        vector<int> c(3,0);
        for(int i=0;i<n;i++){
            int temp; cin>>temp;
            c[temp%3]+=1;
        }
        int ans = 0;
        int d= n/3;
        int i=0;
        while((c[0]!=d or c[1]!=d or c[2]!=d) and i<10){
            if(c[i%3]>d){
                c[(i+1)%3]+=(c[i%3]-d);
                ans+=(c[i%3]-d);
                c[i%3]=d;
            }
            i++;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}