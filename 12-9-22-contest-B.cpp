#include <bits/stdc++.h>

using namespace std;

string solve(){
    int n;
    string str, ans;
    cin>>n;
    cin>>str;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]=='0'){
            string chk;
            int j=str[i-1]-'0';
            j=j+10*(str[i-2]-'0');
            j=j+96;
            char ch=char(j);
            chk.push_back(ch);
            chk=chk+ans;
            ans=chk;
            i=i-2;
        }else{
            string chk;
            char ch=char((str[i]-'0')+96);
            chk.push_back(ch);
            chk=chk+ans;
            ans=chk;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}
