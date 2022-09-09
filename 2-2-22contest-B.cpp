#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, j, k;
    cin>>n;
    vector<int>vec;

    for(int i=1;i<=n;i++){
        vec.push_back(i);
    }reverse(vec.begin(), vec.end());
    for(auto &q:vec){
            cout<<q<<" ";
        }cout<<"\n";
    for(int i=0, j=n-1;i<n-1;i++,j--){
        swap(vec[j], vec[j-1]);
        for(auto &q:vec){
            cout<<q<<" ";
        }cout<<"\n";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }return 0;
}
