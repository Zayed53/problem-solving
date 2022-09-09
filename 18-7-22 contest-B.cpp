#include <bits/stdc++.h>

using namespace std;

vector<int> solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    vector<int> ans(n);
    map<int, int> mp;
    for(auto &i:vec){
        cin>>i;
    }for(int i=0;i<n;i++){
        ans[i]=0;
    }
    for(int i=0;i<vec.size();i++){
        if((mp.count(vec[i]))>0){
            if((i-mp[vec[i]]-1)%2==0){
                ans[vec[i]-1]=ans[vec[i]-1]+1;
                mp[vec[i]]=i;
            }
        }else{
            mp.insert({vec[i], i});
            ans[vec[i]-1]=1;
        }
    }

    return ans;

}
int main()
{
    int t;
    cin>>t;
    vector<int> fnl;
    while(t--){
        fnl=solve();
        for(auto &i:fnl){
            cout<<i<<" ";
        }cout<<"\n";
    }return 0;
}
