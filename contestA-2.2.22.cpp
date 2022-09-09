#include <bits/stdc++.h>

using namespace std;

string solve(){
    int op;
    string str;

    cin>>str;

    for(int i=0; i<str.size();i++){
        if(isupper(str[i])){
            op=0;
            for(int j=0; j<i;j++){
                if(str[j]==tolower(str[i])){
                    op=1;
                    break;
                }
            }if(op!=1){
                return "NO";
            }
        }
    }return "YES";
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;

}
