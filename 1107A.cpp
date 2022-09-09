#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, a ,b ;
    string str;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>str;
        if(n>2){
            cout<<"YES\n"<<2<<"\n";
            cout<<str[0]<<" ";
            str.erase(str.begin());
            cout<<str<<"\n";
            continue;
        }if(n==2){
            a=str[0]-'0';
            b=str[1]-'0';
            if(a<b){
                cout<<"YES\n"<<2<<"\n";
                cout<<str[0]<<" "<<str[1]<<"\n";
                continue;
            }
        }cout<<"NO\n";

    }return 0;
}
