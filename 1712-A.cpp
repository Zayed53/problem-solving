#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, k, ans=0;;
    cin>>n>>k;
    vector<int>vec(n);

    for(auto &i:vec){
        cin>>i;
    }
    for(int i=0; i<k;i++){
            if(vec[i]>k){
                ans++;
            }

    }return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}
