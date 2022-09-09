#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, chk=1;
    long long k;
    cin>>n>>k;
    vector<pair<int, int>>vec;
    for(int i=1;i<n;i+=2){
        if(((i+k)*(i+1))%4==0){
            vec.push_back(make_pair(i, i+1));
        }else if(((((i+1)+k)*i)%4)==0){
            vec.push_back(make_pair(i+1, i));
        }else{
            chk=0;
            break;
        }
    }
    if(chk==0){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
        for(int i=0;i<vec.size();i++){
            cout<<vec[i].first<<" "<<vec[i].second<<"\n";
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
