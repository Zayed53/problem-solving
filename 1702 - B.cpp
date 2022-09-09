#include <bits/stdc++.h>

using namespace std;

int solve(){
    string str;
    cin>>str;
    int c=0;
    set<char>vec;
    for(int i=0;i<str.size();i++){
        vec.insert(str[i]);
        if(vec.size()>3){
            c++;
            vec.clear();
            vec.insert(str[i]);
        }

    }if(vec.size()>0){
        return c+1;
    }return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }return 0;
}
