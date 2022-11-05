#include <bits/stdc++.h>

using namespace std;

string solve(){
    int n;
    cin>>n;
    vector <int> vec(n);
    for(auto &i:vec){
        cin>>i;
    }
    for(int i=0;i<n;i++){
        if(count(vec.begin(), vec.end(), vec[i])>1){
            return "NO";
        }
    }
    return "YES";

}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return  0;
}
