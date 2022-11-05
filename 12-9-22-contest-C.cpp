#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

void solve(){
    string str;
    cin>>str;
        int mn=str[0];
    int mx=str[str.size()-1];
    int ans=abs(mx-mn);
    vector<pair<long long, int>>vec;
    if(mx>mn){
        for(int i=0;i<str.size();i++){
            int j=int(str[i]);
            if(j>=mn&&j<=mx){
                vec.push_back(make_pair(i+1, j));
            }
        }
    }else{
        for(int i=0;i<str.size();i++){
            int j=int(str[i]);
            if(j<=mn&&j>=mx){
                vec.push_back(make_pair(i+1, j));
            }
        }
    }

    sort(vec.begin(), vec.end(), sortbysec);

    cout<<ans<<" "<<vec.size()<<"\n";

    for(int i=0; i<vec.size();i++){
        cout<<vec[i].first<<" ";
    }
    cout<<"\n";

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
