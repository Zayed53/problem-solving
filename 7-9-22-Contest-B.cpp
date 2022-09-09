#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<long long> vecA(n);
    vector<long long> vecB(n);
    vector<long long> vecans;

    for(auto &i: vecA){
        cin>>i;
    }for(auto &i: vecB){
        cin>>i;
    }
    vecans.push_back(vecB[0]-vecA[0]);
    for(int i=1;i<n; i++){
        if(vecA[i]<vecB[i-1]){
            vecans.push_back(vecB[i]-vecB[i-1]);
        }else{
            vecans.push_back(vecB[i]-vecA[i]);
        }
    }for(auto &i: vecans){
        cout<<i<<" ";
        //cout<<"size"<<vecans.size();
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }return  0;
}
