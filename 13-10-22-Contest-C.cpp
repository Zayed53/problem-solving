#include <bits/stdc++.h>

using namespace std;

char solve(){
    vector<string> vec;
    for(int i=0;i<8;i++){
        string str;
        cin>>str;
        vec.push_back(str);
    }
    int b=0, r=0;
    for(int i=0;i<8;i++){
        if(vec[i][0]=='B'){
            for(int j=0;j<8;j++){
                    if(vec[i][j]!='B'){
                        break;
                    }
            }return 'B'
        }else if(vec[i][0]=='R'){
            for(int j=0;j<8;j++){
                    if(vec[i][j]!='R'){
                        break;
                    }
            }return 'R';

        }

    }
    for(int i=0;i<8;i++){
        if(vec[0][i]=='B'){
            for(int j=0;j<8;j++){
                    if(vec[j][i]!='B'){

                        break;
                    }
            }return 'B'
        }else if(vec[i][0]=='R'){
            for(int j=0;j<8;j++){
                    if(vec[i][j]!='R'){
                        break;
                    }
            }return 'R';

        }

    }
}
