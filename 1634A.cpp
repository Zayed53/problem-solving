#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, l;
    string str, str2;
    cin>>n>>l;
    cin.ignore();
    cin>>str;
    if(l==0){
        return 1;
    }str2=str;
    reverse(str.begin(), str.end());
    if(str==str2){
        return 1;
    }else{
        return 2;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
