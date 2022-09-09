#include <iostream>
#include <string>

using namespace std;

void solve(){
    int m;
    string str1;
    string strfrst, strscnd;
    cin>>str1;
    if((str1.length()%2)!=0){
        cout<<"No"<<endl;
    }else{
        m=(str1.length()/2);
        for(int i=0; i<m;i++){
            strfrst.push_back(str1[i]);
        }for(int i=m; i<str1.length();i++){
            strscnd.push_back(str1[i]);
        }if(strfrst==strscnd){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        solve();
    }
}
