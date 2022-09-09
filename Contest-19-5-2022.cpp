#include <bits/stdc++.h>

using namespace std;

int solve(){
    string str;
    int n, ans;
    cin>>str;
    if(str.size()==2){
        ans=str[1]-'0';
        return ans;
    }
    ans=str[0]-'0';
    for(int i=1;i<str.size();i++){
        n=str[i]-'0';
        ans=n<ans?n:ans;
    }return ans;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
