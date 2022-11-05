#include <bits/stdc++.h>

using namespace std;

long long solve(){
    int n;
    long long in, s1=0, s2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>in;
        if(in<0){
            s2=s2+in*-1;
        }else{
            s1=s1+in;
        }
    }
    if(s1>s2){
        return  s1-s2;
    }
    return s2-s1;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return  0;
}
