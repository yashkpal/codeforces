//JAY SHREE RAM !!!

#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr, int start , int end , vector<int>& ans ,int h){
    if (start >= end)
        return ;
    int index = max_element(arr.begin()+start , arr.begin()+end)-arr.begin();
    //cout<<index<<" $";
    ans[index]= h;
    solve(arr,start , index , ans , h+1);
    solve(arr,index+1 , end , ans , h+1);
}


int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("test.txt" ,"r",stdin);
    // freopen("output.txt" , "w" , stdout);
    // #endif

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];

        vector<int> ans(n,0);
        //int maxindex = max_element(arr.begin() , arr.end())-arr.begin();
        solve(arr , 0 , n , ans,0);
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}