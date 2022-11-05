#include <bits/stdc++.h>

using namespace std;

void solve(){
    vector<int> vec;
    int n;
    cin>>n;
    if(n==3){
        cout<<-1<<"\n";
        return ;
    }
    if(n%2==0){
        for(int i=n;i>0;i--){
            vec.push_back(i);
        }
    }else{
        for(int i=n;i>3;i=i-2){
            vec.push_back(i-1);
            vec.push_back(i);
        }
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }cout<<"\n";
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
