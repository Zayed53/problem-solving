#include <bits/stdc++.h>

using namespace std;

string solve(){
    int n, m, x, y, c=0;
    vector<string> vec;

    cin>>n>>m;
    //cin.ignore();
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        vec.push_back(str);
    }
//    for(auto &i: vec){
//        cout<<i<<"vec";
//    }
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            if(vec[i][j]=='R'){
                //cout<<"Matched";
                if(c==0){
                    x=i;
                    y=j;
                    c=1;
                    //cout<<x<<y<<"continue";
                    continue;
                }if(j<y||i<x){
                    //cout<<x<<y<<"NO";
                    return "NO";
                }
            }
        }
    }
    //cout<<x<<y<<"YES";
    return "YES";
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
