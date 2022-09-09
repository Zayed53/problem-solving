#include <bits/stdc++.h>

using namespace std;

string solve(){
    int n, m;
    cin>>n>>m;
    vector<int> vec(n);
    for(auto &i: vec){
        cin>>i;
    }string str;
    for(int i=0; i<m; i++){
        str.push_back('B');
    }for(auto &i : vec){
        int s;
        if(str[i-1]=='A'){
            str[m+1-i-1]='A';
        }else if(str[m+1-i-1]=='A'){
            str[i-1]='A';
        }
        else{
            s=i<(m+1-i)?i:(m+1-i);
            str[s-1]='A';
        }

    }
    return str;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
