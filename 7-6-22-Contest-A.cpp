#include <bits/stdc++.h>

using namespace std;

string solve(){
    int n;
    cin>>n;
    vector<long long> veca(n);
    vector<long long> vecb(n);
    for(auto &i :veca){
        cin>>i;
    }for(auto &i : vecb){
        cin>>i;
    }
    mx=*max_element(veca.begin(), veca.end());
    mn=*max_element(vecb.begin(), vecb.end());
    dif=mx-mn;
    if(dif<0){
        return "NO";
    }for(int i=0;i<n;i++){
        long long v=veca[i]-dif;
        if(v<0){
            v=0;
        }
        if(v!=vecb[i]){
            return "NO";
        }
    }return "YES";

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return  0;
}
