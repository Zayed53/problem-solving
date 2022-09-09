#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n, c=0;
    char ck;
    string str;
    cin>>n;
    //cin.ignore();
    cin>>str;
    if(n%2!=0){
        ck=str[n/2];
        c=1;
        for(int i=(n/2)-1, j=(n/2)+1;i>=0;i--, j++){
            if((str[i]==ck)&&(str[j]==ck)){
                c=c+2;
            }else{
                break;
            }
        }return c;
    }ck=str[n/2];
    for(int i=(n/2); i>=0;i--){
        if(str[i]==ck){
            c=c+1;
        }else{
            break;
        }
    }
    for(int i=n/2; i<str.size();i++){
        if(str[i]==ck){
            c=c+1;
        }else{
            break;
        }
    }
    return c-1;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
