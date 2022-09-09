#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin>>n>>q;
    vector<long long> vec(n);
    vector<long long>sum(n);
    for(auto &i:vec){
        cin>>i;
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    sum[0]=vec[0];
    for(int i=1; i<vec.size();i++){
        sum[i]=sum[i-1]+vec[i];
    }
    while(q--){
        long long x, y, ans=0;
        cin>>x>>y;
        if(x==y){
            ans=sum[x-1];
        }else{ans=sum[x-1]-sum[x-y-1];}
        cout<<ans<<"\n";
    }return 0;
}
