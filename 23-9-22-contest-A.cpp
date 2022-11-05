#include <bits/stdc++.h>

using namespace std;

long long solve(){
    int n, mn;
    cin>>n;
    vector<long long> vec(n);
    for(auto &i: vec){
        cin>>i;
    }
    sort(vec.begin(), vec.end());
    mn=(vec[1]-vec[0])+(vec[2]-vec[1]);
    for(int i=1;i<n-2;i++){
        int df=(vec[i+1]-vec[i])+(vec[i+2]-vec[i+1]);
        mn=df<mn?df:mn;
    }
    return mn;

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
