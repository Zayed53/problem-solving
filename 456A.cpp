#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    //s.tolower();
    transform(s.begin()+2, s.end(), s.begin(), ::tolower);
    cout<<s;
    return 0;
    /*int flag = 1;
    int n;
    int arr[n][2];
    int arr1[n], arr2[n];
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }for(int i=0, j=n-1; i<n; i++, j--){
        arr1[i]=arr[i][0];
        arr2[i]=arr[j][1];
    }for(int i=0;i<n;i++){
        if(arr[i][0]==arr[i][1]){
            cout<<"Poor Alex";
            return 0;
        }
    }
    if((is_sorted(arr1, arr1+n-1))&&(is_sorted(arr2, arr2+n-1))){
            cout<<"Happy Alex";
    }else{
        cout<<"Poor Alex";
    }return 0;*/
//    int a, b;
//    pair<int , int > pair2;
//    vector<pair<int , int>> vec;
//    for(int i=0;i<4;i++){
//        cin>>a>>b;
//        pair2=make_pair(a, b);
//        vec.push_back(pair2);
//    }cout<<vec[0].first;
//    for(int i=0; i<vec.size(); i++){
//        cout<<vec[i].first<<vec[i].second<<'\n';
//    }
}
