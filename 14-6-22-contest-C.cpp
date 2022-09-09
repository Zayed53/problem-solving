#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int r=2, c=2, rk=0, ck=0, ext=0;
        vector<string>vec;
            for(int i=0;i<8;i++){
                string str;
                cin>>str;
                vec.push_back(str);
            }for(int i=1;i<7;i++){
                for(int j=1;j<7;j++){
                    if(vec[i][j]=='#'){
                        if((vec[i-1][j-1]=='#')&&(vec[i-1][j+1]=='#')&&(vec[i+1][j-1]=='#')&&(vec[i+1][j+1]=='#')){
                            r=i+1;
                            c=j+1;
                           }
                    }


            }
        }cout<<r<<" "<<c<<"\n";
    }return 0;
}
