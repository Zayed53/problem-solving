#include <bits/stdc++.h>

using namespace std;

string solve(){
    int n;
    long long v1;
    cin>>n;
    vector<long long> vec(n-1);
    cin>>v1;
    for(auto &i : vec){
        cin>>i;
    }
    sort(vec.begin(), vec.end());
    if(v1>vec[0]){
        return "Alice";
    }
    return "Bob";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}
