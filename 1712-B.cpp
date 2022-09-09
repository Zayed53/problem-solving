#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>vec;

    if(n%2==0){
        for(int i=1;i<=n;i++){
            if(i%2!=0){
                vec.push_back(i+1);
            }else{
                vec.push_back(i-1);
            }
        }
    }
    else{
        for(int i=1;i<=n;i++){
            if(i%2==0){
                vec.push_back(i+1);
            }else{
                if(i==1){
                    vec.push_back(i);
                    continue;
                }
                vec.push_back(i-1);
            }
        }
    }


    for(auto &i : vec){
        cout<<i<<" ";
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
