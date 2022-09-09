#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> vec;
    if(n==1){
        cout<<1;
        return ;
    }if(n%2==0){
        for(int i=1;i<=n;i++){
            if(i%2==0){
                vec.push_back(i-1);
            }else if(i%2!=0){
                vec.push_back(i+1);
            }
        }
    }else{
        vec.push_back(3);
        vec.push_back(1);
        vec.push_back(2);
        for(int i=4;i<=n;i++){
            if(i%2==0){
                vec.push_back(i+1);
            }else if(i%2!=0){
                vec.push_back(i-1);
            }
        }
    }for(auto &i : vec){
        cout<<i<<" ";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }return 0;
}
