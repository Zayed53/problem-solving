#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, input;
    vector<long long> vec;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>input;
        vec.push_back(input);
    }
    for(auto &i : vec){
        if(i<=14){
            cout<<"NO\n";
        }
        else if(((i%14)<=6)&&((i%14)>0)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}
