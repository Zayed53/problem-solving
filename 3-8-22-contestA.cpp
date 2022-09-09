#include <bits/stdc++.h>

using namespace std;

void solve(){
    string str;
    char c;
    int ck=0, s=0;
    cin>>str;
    cin>>c;
    if(str.size()%2!=0){
        for(int i=0; i<str.size();i++){
            if(str[i]==c){
                s=1;
                if((i%2==0)&&((str.size()-1)-i)%2==0){
                    ck=1;
                    break;
                }else if(i==0||((str.size()-1)==i)){
                    ck=1;
                    break;
                }else {
                    continue;
                }
            }
        }
    }if(s==1&&ck==1){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }return 0;
}
