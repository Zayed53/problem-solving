#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , ck=0, in, sk=0;
    vector<int>vec;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>in;
        vec.push_back(in);
    }
    //cout<<vec.size();
//    for(auto &i: vec){
//        cout<<i;
//    }
    while((vec.size())>0){
        sort(vec.begin(), vec.end());
        for(auto &i:vec){
            if (i==2048){
            cout<<"YES\n";
            return 0;
            }
        }for(int i=0;i<vec.size()-1;i++){
            if(vec[i]==vec[i+1]){
                cout<<"runing\n";
                cout<<vec[i];
                cout<<i;
                vec.push_back(vec[i]+vec[i+1]);
//                cout<<vec[i]<<vec[i+1];
                vec.erase(vec.begin()+i);
                vec.erase(vec.begin()+i);
                cout<<"size"<<vec.size();
                ck=1;
                break;
            }
        }cout<<"has come this far";
        if(ck!=1){
            break;
        }
    }
    cout<<"No\n";
    return 0;

}
