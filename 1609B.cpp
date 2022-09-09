#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int n, q, p;
    char ch;
    cin>>n>>q;
    cin.ignore();
    cin>>str;
    for(int i=0; i<q ;q++){
        cin>>p;
        cin.ignore();
        cin>>ch;
        int pos = -1 , c=0;
        str[p-1]=ch;
        while(true){
            pos=str.find("abc", ++pos);
            if(pos!=string::npos){
                c++;
            }else {
                break;
            }
        }cout<<c<<"\n";
    }

    return 0;
}//TLE
