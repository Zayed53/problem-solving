#include <bits/stdc++.h>

using namespace std;

long long solve(){
    long long n, m;
    int c=0;
    cin>>n;
    m=n;
    while(1){
        m=m/10;
        if(m==0){
            break;
        }else{
            c++;
        }
    }
    return n-pow(10, c);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
