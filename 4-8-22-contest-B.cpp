#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> vec;
    cout<<n<<"\n";
    for(int i=1;i<=n;i++){
        vec.push_back(i);
    }
    for(auto &i : vec){
        cout<<i<<" ";
    }cout<<"\n";
    swap(vec[0], vec[n-1]);
    for(auto &i : vec){
        cout<<i<<" ";
    }cout<<"\n";
    for(int i=n-1;i>1;i--){
        swap(vec[i], vec[i-1]);
        for(auto &i : vec){
            cout<<i<<" ";
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
