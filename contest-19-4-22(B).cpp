#include <bits/stdc++.h>

using namespace std;

string solve(){
    long long n, m, ans;
    vector<int> vec;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        vec.push_back(c);
    }sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    ans=(vec[0]*2)+1;
    for(int i=1;i<vec.size()-1;i++){
        ans=ans+(vec[i]+1);
    }ans=ans+1;
    if(ans>m){
        return "NO";
    }else if(ans<=m){
        return "YES";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
