#include <bits/stdc++.h>

using namespace std;

string solve(map<long long, pair<int, int>> &mp){
    int a, b;
    cin>>a>>b;
    if((mp.count(a)==0)||(mp.count(b)==0)){
        return "NO";
    }if(mp[a].first<mp[b].second){
        return "YES";
    }return "NO";

}
void ans(){
    int n, k;
    cin>>n>>k;
    map<long long, pair<int, int>>mp;
    for(int i=0;i<n;i++){
         long long in;
        cin>>in;
        if(mp.count(in)>0){
            mp[in].second=i;
        }else{
            mp.insert({in, make_pair(i, i)});
        }
    }while(k--){
        cout<<solve(mp)<<"\n";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin.ignore();
        ans();
    }return 0;
}
