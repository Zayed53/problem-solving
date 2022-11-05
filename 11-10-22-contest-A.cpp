#include <bits/stdc++.h>

using namespace std;

void solve(){
    string str1,str2;
    int cx1, cx2;
    cin>>str1>>str2;

    if(str1[str1.size()-1]==str2[str2.size()-1]){
        if(str1[str1.size()-1]=='S'){
            if(str1.size()<str2.size()){
                cout<<">\n";
            }else if(str1.size()>str2.size()){
                cout<<"<\n";
            }else{
                cout<<"=\n";
            }
        }else if(str1[str1.size()-1]=='L'){
            if(str1.size()<str2.size()){
                cout<<"<\n";
            }else if(str1.size()>str2.size()){
                cout<<">\n";
            }else{
                cout<<"=\n";
            }

        }else{
            cout<<"=\n";
        }
    }
    else if(str1[str1.size()-1]=='S'){
        cout<<"<\n";
    }else if(str1[str1.size()-1]=='L'){
        cout<<">\n";
    }else if(str2[str2.size()-1]=='L'){
        cout<<"<\n";
    }else if(str2[str2.size()-1]=='S'){
        cout<<">\n";
    }else if(str1[str1.size()-1]=='M'&&str2[str2.size()-1]=='L'){
        cout<<"<\n";
    }else{
        cout<<">\n";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
