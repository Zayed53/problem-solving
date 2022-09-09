#include <bits/stdc++.h>

using namespace std;

long long solve(){
    long long n, m;
    cin>>n>>m;
    if(n==1&&m==1){
        return 0;
    }if(n==1){
        if(m==2){
            return 1;
        }else{
            return -1;
        }
    }if(m==1){
        if(n==2){
            return 1;
        }else{
            return -1;
        }
    }if(((n%2==0)&&(m%2!=0))||((m%2==0)&&(n%2!=0))){
        if(n>m){
            return ((n-2)*2)+1;
        }else{
            return ((m-2)*2)+1;
        }
    }if(n>=m){
        return (n-1)*2;
    }
    return (m-1)*2;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
