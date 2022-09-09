#include <bits/stdc++.h>

using namespace std;

string solve(){
    int n, x;
    cin>>n>>x;
    vector<int> vec(2*n);
    for(auto &i : vec){
        cin>>i;
    }
    sort(vec.begin(), vec.end());
    for(int i=0;i<n;i++){
        if((vec[i+n]-vec[i])<x){
            return "NO";
        }
    }
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
